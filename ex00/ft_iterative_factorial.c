/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:54:43 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 12:58:15 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else
		result = 1;
	while (nb > 0)
		result *= nb--;
	return (result);
}

// int	main(int argc, char *argv[])
// {
// 	printf("fact : %d, result = %d\n", atoi(argv[argc - 1]),
// 		ft_iterative_factorial(atoi(argv[argc - 1])));
// }

// int	main(void)
// {
// 	int n = -70;
// 	while (++n < 13)
// 		printf("Factorial %d = %d\n", n,
// 			ft_iterative_factorial(n));
// }
