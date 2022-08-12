/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:37:50 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/01 18:53:52 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	int	b;
	int c;
	int d;
	int *div;
	int	*mod;

	a = 6;
	b = 3;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
}*/
