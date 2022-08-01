/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeyanlo <zzeyanlo@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:29:33 by zzeyanlo          #+#    #+#             */
/*   Updated: 2022/07/26 10:36:29 by zzeyanlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2 [i];
		i++;
	}

	s1[i] = '\n';

	return 0;


}

int	main()
{
	char dest[] = "zeynal";
	char source[] = "hello";
	ft_strcpy(dest, source);
}
