#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <math.h>
#include "includes/libftprintf.h"

int main(void)
{
	// // // BONUSES

	printf("\n***BONUS***\n");

	// // // %S

	printf("\n%%S tests==============================\n\n");
	ft_printf("lowercase\t%S", "frick!\n");
	ft_printf("uppercase\t%S", "FRICK!\n");

	// // // %r

	printf("\n%%r tests==============================\n\n");
	ft_printf("1234\t\t= %-20r\n", 1234);
	ft_printf("420\t\t= %-20r\n", 420);
	ft_printf("69\t\t= %-20r\n", 69);
	ft_printf("1234\t\t= %20r\n", 1234);
	ft_printf("420\t\t= %20r\n", 420);
	ft_printf("69\t\t= %20r\n", 69);
	ft_printf("1234\t\t= %020r\n", 1234);
	ft_printf("420\t\t= %020r\n", 420);
	ft_printf("69\t\t= %020r\n", 69);

	// // // %b

	printf("\n%%b tests==============================\n\n");
	ft_printf("1234\t\t= %-20b\n", 1234);
	ft_printf("420\t\t= %-20b\n", 420);
	ft_printf("69\t\t= %-20b\n", 69);
	ft_printf("1234\t\t= %20b\n", 1234);
	ft_printf("420\t\t= %20b\n", 420);
	ft_printf("69\t\t= %20b\n", 69);
	ft_printf("1234\t\t= %020b\n", 1234);
	ft_printf("420\t\t= %020b\n", 420);
	ft_printf("69\t\t= %020b\n", 69);

	// // // *

	printf("\n*  tests==============================\n\n");
	printf("* = 20\n\n");
	ft_printf("-*1234\t\t= %-*d\n", 20, 1234);
	ft_printf("-*420\t\t= %-*d\n", 20, 420);
	ft_printf("-*69\t\t= %-*d\n", 20, 69);
	ft_printf("*1234\t\t= %*d\n", 20, 1234);
	ft_printf("*420\t\t= %*d\n", 20, 420);
	ft_printf("*69\t\t= %*d\n", 20, 69);
	ft_printf("0*1234\t\t= %0*d\n", 20, 1234);
	ft_printf("0*420\t\t= %0*d\n", 20, 420);
	ft_printf("0*69\t\t= %0*d\n", 20, 69);

	// // // %e

	int		tmp1;
	int		tmp2;

	printf("\n%%e tests==============================\n\n");
	printf("printf %%e\n\n");
	printf(" 1234.1\t\t=\t% e\n", 1234.1);
	printf(" 420.1\t\t=\t% e\n", 420.1);
	printf(" 69.1\t\t=\t% e\n", 69.1);
	printf(" 3.1\t\t=\t% e\n", 3.1);
	printf("-1234.1\t\t=\t%e\n", -1234.1);
	printf("-420.1\t\t=\t%e\n", -420.1);
	printf("-69.1\t\t=\t%e\n", -69.1);
	printf("-3.1\t\t=\t%e\n", -3.1);
	printf(" 1.2341\t\t=\t% e\n", 1.2341);
	printf(" 0.4201\t\t=\t% e\n", 0.4201);
	printf(" 0.0691\t\t=\t% e\n", 0.0691);
	printf(" 0.0031\t\t=\t% e\n", 0.0031);
	printf("-1.2341\t\t=\t%e\n", -1.2341);
	printf("-0.4201\t\t=\t%e\n", -0.4201);
	printf("-0.0691\t\t=\t%e\n", -0.0691);
	tmp1 = printf("-0.0031\t\t=\t%e\n", -0.0031);
	printf("return: %d\n\n", tmp1);
	// printf("% 20e\n", 1234.1);
	// printf("%-20e\n", 420.1);
	// printf("%020e\n", 69.1);
	// printf("% 20e\n", 123411111111.1);
	// printf("%-20e\n", 42011111111.1);
	// printf("%020e\n", 6911111111.1);
	// printf("% 20e\n", 0.1);
	// printf("%-20e\n", -0.1);
	// printf("%020e\n", -6.0);
	// printf("%.2e\n", 0.0);
	// printf("%.2e\n", 00.000);
	// printf("%.2e\n", 000000.00000000000000000);
	printf("ft_printf %%e\n\n");
	ft_printf(" 1234.1\t\t=\t% e\n", 1234.1);
	ft_printf(" 420.1\t\t=\t% e\n", 420.1);
	ft_printf(" 69.1\t\t=\t% e\n", 69.1);
	ft_printf(" 3.1\t\t=\t% e\n", 3.1);
	ft_printf("-1234.1\t\t=\t%e\n", -1234.1);
	ft_printf("-420.1\t\t=\t%e\n", -420.1);
	ft_printf("-69.1\t\t=\t%e\n", -69.1);
	ft_printf("-3.1\t\t=\t%e\n", -3.1);
	ft_printf(" 1.2341\t\t=\t% e\n", 1.2341);
	ft_printf(" 0.4201\t\t=\t% e\n", 0.4201);
	ft_printf(" 0.0691\t\t=\t% e\n", 0.0691);
	ft_printf(" 0.0031\t\t=\t% e\n", 0.0031);
	ft_printf("-1.2341\t\t=\t% e\n", -1.2341);
	ft_printf("-0.4201\t\t=\t%e\n", -0.4201);
	ft_printf("-0.0691\t\t=\t%e\n", -0.0691);
	tmp2 = ft_printf("-0.0031\t\t=\t%e\n", -0.0031);
	printf("return: %d\n\n", tmp2);

	while (1);

	return (0);
}
