/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:22:54 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/10 08:53:39 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	char s[265] = {0};

	i = 0;
	j = 1;
	if (ac == 3)
	{
		while(j < 3)
		{
			while(av[j][i])
				s[(int)av[j][i++]] = 1;
			j++;
			i = 0;
		}
		j = 1;
		while(j < 3)
		{
			while(av[j][i])
			{
				if(s[(int)av[j][i]] == 1)
				{
					write(1, &av[j][i], 1);
					s[(int)av[j][i]] = 2;
				}
				i++;
			}
			i = 0;
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
