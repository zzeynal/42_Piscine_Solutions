/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:16:04 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/22 12:11:09 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	a;
	int	i;
	
	i = 25; 
	while (i >= 0)
	{
		if ( (i % 2) == 0)
		{
			a = a + i + 'A';
			write (1, &a, 1);
			i--;
		}
		else
		{
			a = a + i + 'a';
			write(1, &a, 1);
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
