/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:18:57 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/22 10:33:19 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num++ < '9')
		write(1, &num, 1);
}
// 
// int	main(void)
// {
// 	ft_print_numbers();
// }
// 
