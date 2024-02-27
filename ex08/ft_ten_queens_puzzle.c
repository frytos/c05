/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:38:23 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/27 16:09:10 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_ten_queens_puzzle(void);
void	put_queen(int *position, int queen, int *ptr_res);
int		get_pos(int j, int *position);
int		is_safe(int *position, int queen, int i);
void	ft_putchar(char c);

int	ft_ten_queens_puzzle(void)
{
	int	position[10];
	int	res;
	int	*ptr_res;
	int	i;

	res = 0;
	ptr_res = &res;
	i = 0;
	while (i < 10)
		position[i++] = -1;
	put_queen(position, 0, ptr_res);
	return (res);
}

void	put_queen(int *position, int queen, int *ptr_res)
{
	int	col;
	int	p;

	col = 0;
	while (col < 10)
	{
		if (position[col] < 0 && is_safe(position, queen, col))
		{
			position[col] = queen;
			if (queen < 9)
				put_queen(position, queen + 1, ptr_res);
			else
			{
				(*ptr_res)++;
				p = 0;
				while (p < 10)
					ft_putchar(position[p++] + '0');
				write(1, "\n", 1);
			}
			position[col] = -1;
		}
		col++;
	}
}

int	is_safe(int *position, int queen, int col)
{
	int	j;
	int	k;
	int	m;

	if (queen == 0)
		return (1);
	j = 0;
	while (j < queen)
	{
		k = get_pos(j, position);
		m = 0;
		while (m < 10 - j)
		{
			if ((j + m) == queen && ((k + m) == col || (k - m) == col))
				return (0);
			m++;
		}
		j++;
	}
	return (1);
}

int	get_pos(int j, int *position)
{
	int	col;

	col = 0;
	while (position[col] != j)
		col++;
	return (col);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	int n = ft_ten_queens_puzzle();
// 	printf("Nb of solutions : %d", n);
// 	return (0);
// }
