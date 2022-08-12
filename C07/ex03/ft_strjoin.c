/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:01:26 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/11 17:13:30 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		j;
	int		i;
	int		sc;

	sc = 0;
	final_str = (char *)malloc(sizeof(strs) * size);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			final_str[sc++] = strs[j][i++];
		}
		i = 0;
		while (sep[i] != '\0' && j < size - 1)
		{
			final_str[sc++] = sep[i++];
		}
		j++;
	}
	final_str[sc] = '\0';
	return (final_str);
}
/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	printf("this is result %s", ft_strjoin(ac, av, "---"));
}*/
