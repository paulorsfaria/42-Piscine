/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:06:14 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/04 11:16:01 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[j] != '\0')
    {
        j++;
    }
    
    while (src[i] != '\0')
    {
        dest[j] = src [i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_strcat(argv[1], argv[2]);
    
    printf("%s", argv[1]);
}