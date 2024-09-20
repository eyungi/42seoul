/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunglee <yunglee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:31:22 by yunglee           #+#    #+#             */
/*   Updated: 2023/08/10 14:50:13 by yunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int flag;

	i = 0;
	flag = f(tab[i], tab[length - 1]);
	while (i < length - 1)
	{
		if (flag != f(tab[i], tab[i + 1]) && f(tab[i], tab[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
