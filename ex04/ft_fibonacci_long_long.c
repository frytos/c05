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

long long	ft_fibonacci(long long index);

long long	ft_fibonacci(long long index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (index);
}

// int	main(long long argc, char *argv[])
// {
// 	printf("fib(%s) = %d", argv[argc -1], ft_fibonacci(atoi(argv[1])));
// }
