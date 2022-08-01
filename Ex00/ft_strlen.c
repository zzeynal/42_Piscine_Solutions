/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:09:33 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/26 11:23:49 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i])
	{
		i++;
	}
	return i;
}


int	main()
{
	char str[] = "hello";
	ft_strlen(str);
}
