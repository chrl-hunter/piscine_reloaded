/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:31 by cperez-h          #+#    #+#             */
/*   Updated: 2026/10/01 13:50:33 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char out, int ex)
{
	write(ex, &out, 1);
}

void	ft_putstr(char *str, int ex)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], ex);
		i++;
	}
}

void	ft_display_file(char *file)
{
	int		fd;
	int		bytes;
	char	buffer[1024];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file", 2);
		ft_putstr("\n", 2);
	}
	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
	close (fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing", 2);
		ft_putstr("\n", 2);
	}
	if (argc == 2)
		ft_display_file(argv[1]);
	if (argc > 2)
	{
		ft_putstr("Too many arguments", 2);
		ft_putstr("\n", 2);
	}
}
