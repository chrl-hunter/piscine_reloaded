/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:18:57 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/28 11:42:37 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char out);

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num < '9')
	{
		ft_putchar(num);
		num++;
	}
}
// 
// int	main(void)
// {
// 	ft_print_numbers();
// }
// 
