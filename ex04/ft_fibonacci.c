/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:22:40 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 14:54:57 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index < 0)
		return (-1);
	else
		return (index);
}

// int	main(int argc, char *argv[])
// {
// 	printf("fib(%s) = %d", argv[argc -1], ft_fibonacci(atoi(argv[1])));
// }

// double fibNo(int n)
// {
// 	double FibN = (pow((1+sqrt(5))/2, n) - pow((1-sqrt(5))/2, n)) / sqrt(5);
// 	return FibN;
// }

// int	main(void)
// {
// 	int i = -46;

// 	while (i++ < 46)
// 		printf("i = %d\t ft_fibonacci(%d) = %d\t 
//			fibonnacci(%d) = %f\t diff = %f\n\n",
// 			i, i, ft_fibonacci(i), i, fibNo(i), ft_fibonacci(i) - fibNo(i));
// }