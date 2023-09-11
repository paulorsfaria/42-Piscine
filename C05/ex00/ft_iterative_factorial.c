/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:06:42 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/11 08:10:40 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	i;

	i = 1;
	total = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		while (i <= nb)
		{
			total = total * i;
			i++;
		}
		return (total);
	}
}
/*
int main(int argc, char **argv)
{
if(argc == 1)
return 0;
printf("%d", ft_iterative_factorial(atoi(argv[1])));
}*/
