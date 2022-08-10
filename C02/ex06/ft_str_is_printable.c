/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:30:30 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/03 17:35:55 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else if ((str[i] <= 32) || (str[i] >= 126))
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
	ft_str_is_printable(str);
}*/
