/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:28:54 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/09 14:56:37 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src [i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest); 
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_strncat(argv[1], argv[2], atoi(argv[3]));
    
    printf("%s", argv[1]);
}*/
