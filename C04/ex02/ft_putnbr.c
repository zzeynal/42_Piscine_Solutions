/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:56:46 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/07 12:00:52 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int nb, int temp, int size)
{
	while (temp)
	{
		temp = temp / 10;
		if (temp > 0)
			size = size * 10;
	}
	while (size)
	{
		temp = nb / size + '0';
		nb = nb % size;
		size = size / 10u;
		write(1, &temp, 1);
	}
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	temp = nb;
	ft_print_numbers(nb, temp, size);
}
/*
int	main(void)
{
	int sss;

	sss = -2147483648;
	ft_putnbr(sss);
	return (0);
}*/
