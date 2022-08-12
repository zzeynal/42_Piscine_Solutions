/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:00:06 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/11 12:57:12 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num_range;

	num_range = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * num_range);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < num_range)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (num_range);
}
/*
#include <stdio.h>
int	main()
{
	int i;
	int *arr;
	int size;
	size = ft_ultimate_range(&arr, 50, 60);
	i = 0;
	while (i < size)
	{
		printf("this value %d belongs to 
		this %d index of our new range array \n", arr[i], i);
		i++;
	}
}*/
