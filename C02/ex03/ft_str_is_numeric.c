/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:35:40 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 10:20:55 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
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
			if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d",ft_str_is_numeric(argv[1]));
}
*/
