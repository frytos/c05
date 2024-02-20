/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:54:43 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 09:32:53 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_iterative_factorial(nb - 1));
	else if (nb < 1)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int nb = 1;
	printf("fact : %d, result = %d\n", nb, ft_iterative_factorial(nb));
}
