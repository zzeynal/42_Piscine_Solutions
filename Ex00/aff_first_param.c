/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:22:09 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/25 13:57:35 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if(!(argc < 1))
	{
		
		int i;

		i = 0;
		while(argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	//	ft_putchar('\n');
	}
//	else
//		ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
