/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcross <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 02:03:21 by rcross            #+#    #+#             */
/*   Updated: 2019/06/05 02:04:38 by rcross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d(char **tab)
{
	int		i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}