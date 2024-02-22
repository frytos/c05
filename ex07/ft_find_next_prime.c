/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:09:36 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/21 07:55:25 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <time.h>

int	ft_find_next_prime(int nb);
int	ft_sqrt_ceil(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	else if (nb <= 5)
		return (5);
	i = nb % 6;
	if (i <= 1)
		if (ft_is_prime(nb + 1 - i))
			return (nb +1 - i);
	nb = nb + 5 - i;
	while (nb < INT_MAX)
	{
		if (ft_is_prime(nb))
			return (nb);
		else if (ft_is_prime(nb + 2))
			return (nb + 2);
		nb += 6;
	}
	return (INT_MAX);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_sqrt;

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

// int main(int argc, char **argv)
// {
//   	(void)argc;
//     printf("%d",ft_find_next_prime(atoi(argv[1])));
// }
// int main(int argc, char **argv)
// {
// 	int n = atoi(argv[1]);
// 	clock_t t;
// 	double time_taken, duration;
// 	clock_t t_launch;
// 	t_launch = clock();
//   	(void)argc;
// 	while (n++ < INT_MAX)
// 	{
// 		t = clock() - t;
// 		time_taken = ((double)t)/CLOCKS_PER_SEC;
// 		t = clock();
// 		duration = (double)(clock() - t_launch)/CLOCKS_PER_SEC;
// 		printf("%3.2f\t%d\t%d\t%f10\n", 
// 			duration, n, ft_find_next_prime(n), time_taken);
// 	}
// }
// int main(void)
// {
// 	int n = 0;
// 	int found;
// 	clock_t t;
// 	double time_taken;
// 	clock_t t_launch;
// 	t_launch = clock();
// 	while (1)
// 	{	
// 		found = ft_sqrt(n);
// 		if (found)
// 		{		
// 			t = clock() - t;
// 			time_taken = ((double)t)/CLOCKS_PER_SEC;
// 			printf("\t%fs\t%fs\t#     %d \t-> sqrt() ->\t %d     #\n", 
//				((double)(clock() - t_launch))/CLOCKS_PER_SEC,
//				 time_taken, n, found);
// 			t = clock();
// 		}
// 		n++;
// 	}
// }