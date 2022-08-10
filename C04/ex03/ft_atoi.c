/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:04:46 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/08/08 20:37:56 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign_space(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	else if (c == '\v' || c == '\f')
		return (1);
	else if (c == '\n' || c == '\r')
		return (1);
	else if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (is_sign_space(str[i]))
	{	
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum = (sum * 10) + (str[i] - '0');
		}
		else if (!is_sign_space(str[i]))
			break ;
		i++;
	}
	return (sum * sign);
}

#include <stdio.h>
int main()
{
	char num[] = "---+jjh1-2345[b";
	ft_atoi(num);
	printf("%d", ft_atoi(num));
}
