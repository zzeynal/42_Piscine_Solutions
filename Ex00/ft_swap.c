/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:36:24 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/26 11:57:31 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;
	int temp;

	i = 0;
	while(a[i] || b[i])
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		i++;
	}
}


int	main()
{
	int	a[] = {1,2,3,4};
	int b[] = {5,6,7,8};
	ft_swap(a, b);
	return 0;
}
