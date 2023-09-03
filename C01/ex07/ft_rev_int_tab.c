/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:35:58 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 16:23:51 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_into_tab(int *tab)
{
	int	temp;
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] < tab[i +1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
}
/*
int	main(void)
{
int test;
	char	tab[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1'};
test = *tab;
	ft_rev_into_tab(test);
}*/
