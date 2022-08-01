/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:02:54 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/24 11:24:56 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_lines(int x, char ilk, char orta, char son)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(ilk);
		else if (i < x)
			ft_putchar(orta);
		else
			ft_putchar(son);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print_lines(x, 'o', '-', 'o');
		else if (i < y)
			ft_print_lines(x, '|', ' ', '|');
		else
			ft_print_lines(x, 'o', '-', 'o');
		i++;
	}
}
