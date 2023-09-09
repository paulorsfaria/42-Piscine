/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:56:39 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/09 14:45:01 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n) 
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
}*/
