/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:57:31 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/01 20:07:58 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int c;
	int d;
	int *a;
	int *b;

	c = 5;
	d = 3;
	a = &c;
	b = &d;

	ft_ultimate_div_mod(a, b);
	return (0);
}*/
