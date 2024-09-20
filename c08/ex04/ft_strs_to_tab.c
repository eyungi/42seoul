/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunglee <yunglee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:12:58 by yunglee           #+#    #+#             */
/*   Updated: 2023/08/09 09:35:09 by yunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len4(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*str_cpy(char *src)
{
	int		i;
	char	*arr;

	arr = (char *)malloc(sizeof(char) * ft_len4(src) + 1);
	i = 0;
	while (src[i] != 0)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*sarr;

	sarr = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (!sarr)
		return (0);
	while (i < ac)
	{
		sarr[i].size = ft_len4(av[i]);
		sarr[i].str = av[i];
		sarr[i].copy = str_cpy(av[i]);
		i++;
	}
	sarr[i].str = 0;
	return (sarr);
}
