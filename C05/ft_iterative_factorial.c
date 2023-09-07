/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:06:42 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/07 14:29:12 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
    int total;
    int i;
    
    i = 0;
    total = 0;
    if(nb == 0)
    {
        return(total + 1);
    }
    else
    {
        while(i < nb)
        {
            
        total = total + nb * (nb - i);
        i++;
        }
        return(total);
    }
}
int main(int argc, char **argv)
{
    if(argc == 1)
        return 0;
    printf("%d", ft_iterative_factorial(atoi(argv[1])));
}