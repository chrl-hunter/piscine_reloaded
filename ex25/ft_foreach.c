/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:32:30 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/30 16:24:44 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// void	ft_putchar(char out)
// {
// 	write(1, &out, 1);
// }
// 
// void	ft_putstr(char *str)
// {
// 	int	i;
// 
// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }
// 
// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr(nb / 10);
// 	ft_putchar((nb % 10) + '0');
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main(void)
// {
// 	int	nb[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
// 
// 	ft_foreach(nb, 9, &ft_putnbr);
// }
