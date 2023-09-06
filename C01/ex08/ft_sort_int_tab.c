/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:03:19 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/06 07:11:14 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;
	int	j;

	j = 0;
	i = 0;
	while(tab[i] != '\0')
	{
			while (tab[i] < tab[j])
			{
				swap = tab[j];
				tab[j] = tab[i];
				tab[i] = swap;
				j++;
			}

		j = i;
		i++;
	}
}
/*int	main(void)
{
	int tab[10] = {1, 6, 2, 4, 3, 5, 7, 8, 9};
	int size = 9;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while (tab[i] != '\0')
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
