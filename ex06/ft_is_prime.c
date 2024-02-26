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
int	reduce_windows_and_get_sqrt(int nb, int floor, int ceiling, int explorer);

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_sqrt;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb == 2147483647)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	nb_sqrt = ft_sqrt_ceil(nb);
	
	while (i <= nb_sqrt)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_sqrt_ceil(int nb)
{
	int	ceiling;
	int	floor;
	int	explorer;

	if (nb <= 0 || 2147395600 < nb)
		return (0);
	else if (nb == 1)
		return (1);
	floor = 2;
	ceiling = 46340;
	explorer = 23171;
	return (reduce_windows_and_get_sqrt(nb, floor, ceiling, explorer));
}

int	reduce_windows_and_get_sqrt(int nb, int floor, int ceiling, int explorer)
{
	while (ceiling - floor > 2)
	{
		explorer = (ceiling + floor) / 2;
		if (explorer * explorer == nb)
			return (explorer);
		else if (explorer * explorer < nb)
			floor = explorer;
		else if (nb < explorer * explorer)
			ceiling = explorer;
	}
	return (ceiling);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_is_prime(atoi(argv[1])));
// }

int main(void)
{
	long n = -1;
	int found;
	clock_t t;
	double time_taken;
	clock_t t_launch;
	t_launch = clock();
	while (n <= 2147483647)
	{	
		n++;
		found = ft_is_prime(n);
		if (found)
		{		
			t = clock() - t;
			time_taken = ((double)t)/CLOCKS_PER_SEC;
			printf("\t%fs\t%fs\t#     %ld\tis prime !"
				, ((double)(clock() - t_launch))/CLOCKS_PER_SEC
				, time_taken, n);
			t = clock();
			n = n + 10000;
			printf("\tnext : %ld \n", n);
		}
	}
}
