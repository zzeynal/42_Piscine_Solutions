/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:59:51 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/03 17:20:08 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			i++;
		else if ((str[i] <= 97) || (str[i] >= 122))
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char str[] = "abhd";
	ft_str_is_lowercase(str);
}*/
