/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:21:32 by cperez-h          #+#    #+#             */
/*   Updated: 2026/09/26 19:42:21 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	str1[]="Abcd";
	char	str2[]="abc";

	if (ft_strcmp(str1, str2) == 0)
		printf("%s\n", "igual");
	if (ft_strcmp(str1, str2) > 0)
		printf("%s\n", "mayor");
	if (ft_strcmp(str1, str2) < 0)
		printf("%s\n", "menor");
}
