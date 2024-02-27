/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:38:23 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/26 23:33:43 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_ten_queens_puzzle(int size);
void	put_queen(int *position, int queen, int *ptr_nb_sol, int size);
int		get_pos(int j, int *position);
int		is_ok(int *position, int queen, int i, int size);
void	ft_putchar(char c);

int	ft_ten_queens_puzzle(int size)
{
	int	position[size];
	int	nb_sol;
	int *ptr_nb_sol;
	int i;

	nb_sol = 0;
	ptr_nb_sol = &nb_sol;
	i = 0;
	while (i < size)
		position[i++] = -1;
	put_queen(position, 0, ptr_nb_sol, size);
	return (nb_sol);
}

void	put_queen(int *position, int queen, int *ptr_nb_sol, int size)
{
	int	i;
	int	p;

	i = 0;
	while (i < size)
	{
		if (position[i] < 0 && is_ok(position, queen, i, size))
		{
			position[i] = queen;
			if (queen < size - 1)
				put_queen(position, queen + 1, ptr_nb_sol, size);
			else
			{
				*ptr_nb_sol = *ptr_nb_sol + 1;
				p = 0;
				while (p < size)
					ft_putchar(position[p++] + '0');
				write(1, "\n", 1);
			}
			position[i] = -1;
		}
		i++;
	}
}

int	is_ok(int *position, int queen, int i, int size)
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
		while (m < size - j)
		{
			if ((j + m) == queen && ((k + m) == i || (k - m) == i))
				return (0);
			m++;
		}
		j++;
	}
	return (1);
}

int	get_pos(int j, int *position)
{
	int	k;

	k = 0;
	while (position[k] != j)
		k++;
	return (k);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(int argc, char *argv[])
// {
// 	ft_ten_queens_puzzle(atoi(argv[1]));
// 	return (0);
// }
