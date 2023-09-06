/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:58:15 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/06 12:12:11 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(int argc, char **argv)
{
    if(argc == 1)
    {
        return (0);
    }
    printf("%d", ft_strlen(argv[1]));
}*/
