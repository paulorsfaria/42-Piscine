/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:19:20 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/06 08:30:42 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main()
{
	int a;
	int b;
	a = 12;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("resultado de 12 : 2 = %d \n resto: %d", a, b);
}*/
