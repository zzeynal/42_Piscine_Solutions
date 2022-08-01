/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:50 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/28 08:39:00 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	slow;
	int	fast;

	slow = 0;
	fast = 0;
	while (slow < 100)
	{
		fast = slow + 1;
		while (fast < 100)
		{
			ft_putchar(slow / 10 + '0');
			ft_putchar(slow % 10 + '0');
			ft_putchar(' ');
			ft_putchar(fast / 10 + '0');
			ft_putchar(fast % 10 + '0');
			if (!((slow == 98) && (fast == 99)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			fast++;
		}
		slow++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return 0;
}*/
