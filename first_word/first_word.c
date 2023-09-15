/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:04:29 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/15 07:49:53 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char	*str)
{
	int i = 0;

	while((str[i] != '\0' && str[i] == ' ') ||( str[i] >= 9 && str[i] <= 13 ))
		i++;
	while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i]<='Z') || str[i] == ',' )
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1,"\n",1);
}

int main(int argc, char **argv)
{
	(void)argc;
	first_word(argv[1]);
}
