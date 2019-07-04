NAME = libftprintf.a

SRCS = ft_printf.c\
		parse.c\
		get_tags.c\
		padding.c\
		roman.c\
		e_helper.c\
		num_helper.c\

LIBFT = *.c\

CONVERSIONS = convert_b.c\
		convert_c.c\
		convert_f.c\
		convert_e.c\
		convert_i.c\
		convert_o.c\
		convert_p.c\
		convert_percent.c\
		convert_s.c\
		convert_u.c\
		convert_x.c\
		convert_r.c\

INCLUDES = includes/

FLAGS = -Wall -Werror -Wextra

OBJECTS = $(patsubst %.c,%.o,$(SRCS))
OBJECTS += $(patsubst %.c,%.o,$(CONVERSIONS))
OBJECTS += $(patsubst %.c,%.o,$(LIBFT))

EXECUTABLE = a.out

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(addprefix srcs/,$(SRCS)) $(addprefix libft/,$(LIBFT)) $(addprefix srcs/conversions/,$(CONVERSIONS)) -I $(INCLUDES)
	ar -rcs $(NAME) $(OBJECTS)
	rm -f $(OBJECTS)

clean:
	rm -f $(EXECUTABLE)
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
