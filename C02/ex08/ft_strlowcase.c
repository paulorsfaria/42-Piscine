/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:54:11 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/03 09:56:42 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	ft_strupcase(argv[1]);
	printf("%s", argv[1]);
	return(0);
}*/
