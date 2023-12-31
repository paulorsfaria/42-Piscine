/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:35:31 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/11 07:53:38 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while ((i * i) != nb && i < (nb / 2))
	{
		if (i > 46340)
			return (0);
		i++;
	}
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
int	main()
{
	printf("%d", ft_sqrt(1));
}*/
