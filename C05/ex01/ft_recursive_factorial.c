/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:06:42 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/11 08:25:25 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		return (nb *= ft_recursive_factorial(nb - 1));
	}
	else
		return (1);
}
/*
int main(int argc, char **argv)
{
    if(argc == 1)
        return 0;
    printf("%d", ft_recursive_factorial(atoi(argv[1])));
}*/
