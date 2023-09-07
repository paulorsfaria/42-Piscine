/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:38:40 by paulo             #+#    #+#             */
/*   Updated: 2023/09/07 21:00:15 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    int total;
    total = 1;
    if(power < 0)
        return 0;
    if(power == 0)
        return 1;
    while(power > 0)
    {
        total = total * nb;
        power--;
    }
    return(total);
}
int main(int argc, char **argv)
{
    if(argc < 2)
    {
        return 0;
    }
    printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}