/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:35:58 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/05 10:42:08 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[30];
	int	i;

	i = 0;
	size--;
	while (size >= 0)
	{
		temp[i] = tab[size];
		size--;
		i++;
	}
	i--;
	while (i >= 0)
	{
		tab[i] = temp[i];
		i--;
	}
}
/*
int	main(void)
{
	int tab[10] = {6, 5, 4, 3, 2, 1};
	int size = 6;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while (tab[i] != '\0')
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/