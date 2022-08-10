/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:20:55 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/03 17:27:45 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else if ((str[i] <= 65) || (str[i] >= 90))
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char str[] = "ABCDEFGHIJKLMNOPRSTUYXZW";
	ft_str_is_uppercase(str);
}*/
