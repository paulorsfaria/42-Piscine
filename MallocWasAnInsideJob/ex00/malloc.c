/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:14:27 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/14 13:14:30 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*newStr;
	
	i = 0;
	len = 0;
	
	while(src[len] != '\0')
		len++;

	newStr = (char*)malloc(sizeof(char) * (len + 1));
	
	if(newStr == NULL)
		return(NULL);
		
	while(i < len)
	{
		newStr[i] = src[i];
		i++;
	}
	
	return(newStr);
}
int	main(int argc, char **argv)
{
	if(argc < 2)
		return(0);
	printf("%s", ft_strdup(argv[1]));
	return (0);
}
