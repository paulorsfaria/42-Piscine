/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:00:45 by paulo             #+#    #+#             */
/*   Updated: 2023/09/11 07:58:50 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
/*
int main(int argc, char **argv)
{
    if(argc < 2)
    {
        return 0;
    }
    printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
