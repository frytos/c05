/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 04:47:56 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/21 04:58:00 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	print_prime(void)
{
	unsigned long long	explorer;
	unsigned long long	n;

	explorer = 0;
	n = 0;
	while (1)
	{
		if (ft_is_prime(explorer))
		{
			n++;
			printf("--#-- %llu   -> %llu\n", n, explorer);
		}
		explorer++;
	}
}

int	main(void)
{
	print_prime();
}
