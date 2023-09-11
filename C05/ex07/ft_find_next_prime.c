/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:09:18 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/11 07:50:22 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	primos;

	primos = ft_is_prime(nb);
	if (primos == 1)
		return (nb);
	else
	{
		while (primos == 0)
		{
			primos = ft_is_prime(++nb);
		}
		return (nb);
	}
}
/*
int	main()
{
	ft_find_next_prime(14);
}*/
