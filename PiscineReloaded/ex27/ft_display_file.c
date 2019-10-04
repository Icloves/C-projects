/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:48:05 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/12 20:32:36 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	arr[SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
	{
		if (fd == -1)
			ft_putstr("open() failed\n");
		else
		{
			ret = read(fd, arr, SIZE);
			arr[ret] = '\0';
			ft_putstr(arr);
		}
		if (close(fd) == -1)
			ft_putstr("close() failed\n");
	}
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
