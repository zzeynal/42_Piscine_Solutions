/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 08:56:09 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/08 15:34:10 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;

	while((str[i] == '\t')||  (str[i] == ' ')|| (str[i] == '\v')|| (str[i] == '\f')|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\r') ||  (str[i] == '-') ||  (str[i] == '+') )
	{	
		if(str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			sum = sum * 10 + (str[i] - '0');
		}
		else if(str[i] < '0' && str[i] > '9' || str[i] == '+') 
			break;
		i++;
	}
	result = sum * sign;
	return (result);
}


int	main()
{
	char nums[] = "---+jjh12+345[b";
	ft_atoi(nums);
	printf("%d", ft_atoi(nums));
}
