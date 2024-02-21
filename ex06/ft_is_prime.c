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

int main(int argc, char **argv)
{
	(void)argc;
    printf("%d",ft_is_prime(atoi(argv[1])));
}
