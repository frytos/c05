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
#include <time.h>

int	ft_is_prime(int nb);
int	ft_sqrt_ceil(int nb);

int	ft_is_prime(int nb)
{
	int	i;
	int nb_sqrt;
	
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	nb_sqrt = ft_sqrt_ceil(nb);
	while (i <= nb_sqrt)
	{
		if (nb % i == 0 || (nb + 2) % i == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_sqrt_ceil(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb > 2147395600)
		return (46341);
	i = 0;
	while ((i * i) < nb)
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	(void)argc;
    printf("%d",ft_is_prime(atoi(argv[1])));
}
