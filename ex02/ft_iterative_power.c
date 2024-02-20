/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:01:22 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 13:22:10 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}

// int	main(int argc, char *argv[])
// {
// 	printf("pow(%s, %s) = %d", argv[argc - 2], argv[argc - 1], 
// 		ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
// }
