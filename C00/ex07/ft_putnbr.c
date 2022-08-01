/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:44:35 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/28 21:25:32 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int nb, int temp, int size)
{
	while (temp)
	{
		temp = temp / 10;
		if (temp > 0)
			size = size * 10;
	}
	temp = nb;
	while (size)
	{
		ft_putchar(temp / size + '0');
		temp = nb % size;
		size = size / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	size = 1;
	ft_print_numbers(nb, temp, size);
}
/*
int	main(void)
{
	int sss;

	sss = -2147483647;
	//sss = 2356;
	ft_putnbr(sss);
	return 0;
}
*/
