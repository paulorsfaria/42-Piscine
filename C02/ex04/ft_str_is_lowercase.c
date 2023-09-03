/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:26:07 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 10:26:11 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
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
			if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d",ft_str_is_lowercase(argv[1]));
}*/
