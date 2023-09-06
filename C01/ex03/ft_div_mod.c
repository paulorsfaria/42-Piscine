/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:01:02 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/06 08:30:34 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	div;
	int	mod;
	int	a;
	int	b;
	a = 12;
	b = 2;

	ft_div_mod( a, b, &div, &mod);
	
	printf("Div:%d, Mod:%d",div, mod);
}
*/
