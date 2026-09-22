/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:25:06 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/22 11:31:06 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// 
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	mod;
// 	int	div;
// 
// 	a = 7;
// 	b = 2;
// 	mod = 0;
// 	div = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d", div, mod);
// }
