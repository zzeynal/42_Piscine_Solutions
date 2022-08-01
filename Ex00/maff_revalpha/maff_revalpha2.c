/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:01:07 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/22 11:13:52 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int	main(void)
{	
	int	i;

	char	letter;

	i = 25;
	while (i >= 0)
	{
		if ((i % 2) == 0)
		{
			letter = i + 'a';
			write (1, &letter, 1);
			i--;
		}
		else
		{
			letter = i + 'A';
			write (1, &letter, 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
