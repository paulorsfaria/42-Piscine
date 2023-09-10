/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:58:41 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/10 10:03:59 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
	{
		ft_rev_params(argv[--i]);
	}
	return (0);
}
