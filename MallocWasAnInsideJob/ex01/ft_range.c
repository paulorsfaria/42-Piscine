/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:55:28 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/15 08:36:17 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
	int *a;
	int i = 0;
	if(min == max)
		return(NULL);
	a =(int*) malloc(sizeof(int) * (max - min));
	if(!a)
		return(0);
	while(min < max)
	{
		a[i] = min++;
		printf("%d",a[i]);
	}
	return(a);
}
int	main(void)
{
	int min = 1;
	int max = 5;
	ft_range(min, max);
}
