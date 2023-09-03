/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:36:35 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 11:29:19 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= ' ' && str[i] <= '~')
			{
				counter++;
			}
			i++;
		}
		if (i == counter || str[0] == '\0')
		{
			return (1);
		}
		else
			return (0);
	}
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d",ft_str_is_printable(argv[1]));
}*/
