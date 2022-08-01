/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:40:35 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/26 09:09:41 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if(argc >1)
	{
		int i;
		
		i = 0;
		while (i <= argc)
		{
			if(i == (argc-1))
			{
				int	j;

				j = 0;
				while(argv[i][j])
				{
					ft_putchar(argv[i][j]);
					j++;
				}
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
