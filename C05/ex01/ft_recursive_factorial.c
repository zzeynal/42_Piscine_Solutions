/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:39:57 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/09 15:24:32 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	else if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}*/
