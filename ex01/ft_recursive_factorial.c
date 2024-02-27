/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:54:43 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 12:57:35 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}

// int	main(int argc, char *argv[])
// {
// 	printf("fact : %s, result = %d\n", argv[argc - 1],
// 		ft_recursive_factorial(atoi(argv[argc - 1])));
// }
