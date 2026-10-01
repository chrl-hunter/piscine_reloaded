/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:35:22 by cperez-h          #+#    #+#             */
/*   Updated: 2026/10/01 11:41:05 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*
int	main(void)
{
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("5! = %d\n", ft_recursive_factorial(5));
	printf("10! = %d\n", ft_recursive_factorial(10));
	printf("-5! = %d\n", ft_recursive_factorial(-5));
	return (0);
}
*/
