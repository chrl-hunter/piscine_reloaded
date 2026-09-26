/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:47:10 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/26 19:02:32 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(1) = %d\n", ft_sqrt(1));
	printf("sqrt(4) = %d\n", ft_sqrt(4));
	printf("sqrt(9) = %d\n", ft_sqrt(9));
	printf("sqrt(16) = %d\n", ft_sqrt(16));
	printf("sqrt(25) = %d\n", ft_sqrt(25));
	printf("sqrt(8) = %d\n", ft_sqrt(8));
	printf("sqrt(-4) = %d\n", ft_sqrt(-4));
	printf("sqrt(2147395600) = %d\n", ft_sqrt(2147395600));
	return (0);
}
*/
