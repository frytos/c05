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
			printf("\t%fs\t%fs\t#     %ld\tis prime !\n"
				, ((double)(clock() - t_launch))/CLOCKS_PER_SEC
				, time_taken, n);
			t = clock();
			n = n + 100000000;
			// printf("\n\tnew start\t\t\t#     %ld \n", n);
		}
	}
}
