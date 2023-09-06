/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 07:20:52 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/05 07:32:59 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sinal;
    int final;

    i = 0;
    sinal = 1;
    final = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sinal = sinal * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        final = (final * 10) + (str[i] - '0');
        i++;
    }
    return (final * sinal);
}

int main(int argc, char **argv)
{
    (void)argc;
    
    printf("%d", ft_atoi(argv[1]));
    return 0;
}
