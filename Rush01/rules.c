/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skizilir <skizilir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:04:24 by skizilir          #+#    #+#             */
/*   Updated: 2022/07/31 20:22:41 by skizilir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
	}
	return (0);
}

int	check_col_up(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_towers;

	i = 0;
	max = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (entry[pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_towers;

	i = 3;
	max = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				visible_towers++;
			}
		}
		if (entry[12 + pos / 4] != visible_towers)
		{
			return (1);
		}
	}
	return (0);
}

int	check_row_left(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	visible_towers;

	i = 0;
	max = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != visible_towers)
		{
			return (1);
		}
	}
	return (0);
}
