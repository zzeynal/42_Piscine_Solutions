/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 08:41:21 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/08 08:54:16 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	lenth;
	char	temp;
	
	i = 0;
	lenth = 0;
	while(str[lenth] != '\0')
	{
		lenth++;
	}
	lenth--;
	while(i < lenth)
	{
		temp = str[i];
		str[i] = str[lenth];
		str[lenth] = temp;
		i++;
		lenth--;
	}
	return(str);
}


int	main()
{
	char str[] = "abcdef";
	ft_strrev(str);
	printf("%s", str);
}
