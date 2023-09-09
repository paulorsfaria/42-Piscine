/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:09:25 by paulo             #+#    #+#             */
/*   Updated: 2023/09/09 19:45:07 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	if(index == 0)
		return(0);
	if(index == 1)
		return(1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main(void)
{
	int index = 99;
	printf("%d", ft_fibonacci(index));
}
