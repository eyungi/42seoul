/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunglee <yunglee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:22:28 by yunglee           #+#    #+#             */
/*   Updated: 2023/08/08 10:55:18 by yunglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_str(char *str, char *charset, int *idx)
{
	int	cnt;
	int	flag;
	int	i;

	cnt = 0;
	flag = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (!is_sep(str[i], charset) && flag)
		{
			flag = 0;
			idx[cnt] = i;
			cnt++;
		}
		else if (is_sep(str[i], charset))
			flag = 1;
		i++;
	}
	return (cnt);
}

char	*ft_cat(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*divide_str(char *str, char *charset, int *idx, int i)
{
	char	*arr;
	int		j;

	str += idx[i];
	j = 0;
	while (!is_sep(str[j], charset) && str[j] != 0)
		j++;
	arr = (char *)malloc(sizeof(char) * j + 1);
	ft_cat(arr, str, j);
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		cnt;
	char	**strs;
	int		idx[2048];

	cnt = find_str(str, charset, idx);
	strs = (char **)malloc(sizeof(char *) * cnt + 1);
	strs[cnt] = 0;
	i = 0;
	while (i < cnt)
	{
		strs[i] = divide_str(str, charset, idx, i);
		i++;
	}
	return (strs);
}
