/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:44:44 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/25 13:17:31 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int	i;

		i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == 'a')
			{
				ft_putchar(argv[1][i]);
				//ft_putchar('\n');
				break;
			}
			i++;
		}
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
