/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:26:33 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/02 16:41:58 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (tab[j - 1] > tab[j])
				ft_swap(&tab[j -1], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int	a[5] = {5,4,3,2,1};
	int *tab;
	int size;
	
	tab = &a[0];
	size = 5;
	ft_sort_int_tab(tab, size);
	return 0;
}*/
