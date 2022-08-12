/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:25:48 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/02 16:43:47 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
int	main()
{
	int a[5] = {1,2,5,3,4};
	int	size;
	int *tab;

	size = 5;
	tab = &a[0];
	ft_rev_int_tab(tab, size);
	return (0);
}*/
