/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:45:05 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/10 18:08:19 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

//6n + 1
int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return(0);
	while(i <= nb / 2)
	{
		if(nb % i == 0)
		{
			return(0);
		}
		i++;
	}
	return(1);
}
int	main(void)
{
	printf("%d", ft_is_prime(4));
	
}
