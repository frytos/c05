/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:56:42 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/21 04:22:22 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	ft_sqrt_ceil(int nb);

int	ft_sqrt_ceil(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb > 2147395600)
		return (46341);
	i = 0;
	while ((i * i) < nb && i <= 46340)
		i++;
	return (i);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
//     printf("%d",ft_sqrt_ceil(atoi(argv[1])));
// }
// int main(void)
// {
// 	int n = 0;
// 	while (n < 2147483647)
// 	{	
// 		printf("n = %d\tc = %d\n", n, ft_sqrt_ceil(n));
// 		n++;
// 	}
// }

int main(void)
{
	long n = 0;
	int found;
	clock_t t;
	double time_taken;
	clock_t t_launch;
	t_launch = clock();
	while (n < 2147395600)
	{	
		found = ft_sqrt_ceil(n++);
		if (found)
		{		
			t = clock() - t;
			time_taken = ((double)t)/CLOCKS_PER_SEC;
			printf("\t%fs\t%fs\t#     %ld \t-> sqrt() ->\t %d     #\n", ((double)(clock() - t_launch))/CLOCKS_PER_SEC, time_taken, n, found);
			t = clock();
			n = n + 123456789;
			printf("\n\tnew start\t\t\t#     %ld \n", n);
		}
	}
}