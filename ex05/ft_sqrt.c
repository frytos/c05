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

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while ((i * i) < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
//     printf("%d",ft_sqrt(atoi(argv[1])));
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
		found = ft_sqrt(n++);
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