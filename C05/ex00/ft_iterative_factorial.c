/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:37:53 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/09 12:28:52 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}
/*
int	main()
{
	int	nb;

	nb = 13;
	ft_iterative_factorial(nb);
}*/
