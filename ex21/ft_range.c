/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:53:53 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/29 13:17:43 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*range;
	int	i;

	len = max - min;
	range = malloc (sizeof(int) * len);
	if (!range)
		return (NULL);
	i = 0;
	while (i < len)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

//int	main(void)
//{
//	int	min;
//	int	max;
//	int	*range;
//	int	i;
//
//	min = 3;
//	max = 5;
//	range = ft_range(min, max);
//	if (!range)
//		return (1);
//	i = 0;
//	while (i < max - min)
//	{
//		printf("%d\n", range[i]);
//		i++;
//	}
//	free(range);
//	return (0);
//}
