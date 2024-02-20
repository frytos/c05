/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:01:22 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/20 14:10:11 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power > 0)
	{
		result = ft_recursive_power(nb, power - 1);
		return (result * nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
	return (result);
}

// int	main(int argc, char *argv[])
// {
// 	printf("pow(%s, %s) = %d", argv[argc - 2], argv[argc - 1], 
// 		ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
// }
