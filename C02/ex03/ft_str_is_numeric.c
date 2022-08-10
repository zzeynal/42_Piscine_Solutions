/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:53:43 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/03 16:58:10 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else if ((str[i] <= 48) || (str[i] >= 57))
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char str[] = "12a456789";
	ft_str_is_numeric(str);
}*/
