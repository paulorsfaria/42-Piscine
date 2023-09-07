/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:08:02 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/07 09:24:31 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(char *str)
{
    int i;
    int sinal;
    int total;

    i = 0;
    sinal = 1;
    total = 0;
    
    while ((str[i] >= 9 && str[i] <= 13 )|| str[i] == ' ')
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sinal = sinal * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        total = (total * 10) + (str[i] - '0');
        i++;
    }
    return (total * sinal);
}
int main(int argc, char **argv)
{
    if (argc == 1)
        return 0;
    printf("%d", ft_atoi(argv[1]));
}
