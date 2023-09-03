/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.frn>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:31:42 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 16:22:02 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char** argv)
{
	(void)argc;
	printf("%d",ft_strlen(*argv + 1));
}*/
