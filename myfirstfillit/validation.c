/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 20:31:25 by fford             #+#    #+#             */
/*   Updated: 2019/11/05 14:11:51 by fford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "fillit.h"

int	check_elements(char *tetr)
{
	int	i;
	int j;
	int	dot;
	int	hash;
	int	sn;

	i = 0;
	dot = 0;
	hash = 0;
	sn = 0;

	i = 0;
	j = 0;
	while (i < 20)
	{
		j = 0;
		while (tetr[i] != '\0')
		{
			j++;
			i++;
		}
		if (!(tetr[i] == '\0' && j == 4))
			return (0);
		i++;
	}
	i = 0;
	while (tetr)
	{
		while (i < 21)
		{
			if (tetr[i] == '.')
				dot++;

			if (tetr[i] == '#')
				hash++;

			if (tetr[i] == '\n')
				sn++;
			i++;
		}
		if ((dot == 12 && hash == 4 && sn == 5))
			return (1);
		else
			return (0);
	}
	return (0);
}

int check_side(char *tetr)
{
	int i;
	int side;

	i = 0;
	side = 0;
	while (i < 20)
	{
		if (tetr[i] == '#')
		{
			if (tetr[i + 1] == '#')
				side++;
			if (tetr[i + 5] == '#')
				side++;
			i++;
		}
		i++;
	}
	if (side == 3 || side == 4)
		return (1);
	else
		return (0);
}


// int	main()
// {
// 	char	tetr[22];
// 	int		size;
// 	int 	side;
// 	int 	fd;
// 	int 	ret;

// 	fd = open("valid_0", O_RDONLY);

// 	ret = read(fd, tetr, 21);
// 	tetr[21] = '\0';
// 	size = check_elements(tetr);
// 	side = check_side(tetr);
// 	printf("%d\n%d\n", size, side);
// 	printf("%s", tetr);
// 	if (size && side)
// 		printf("%s", "figura ogon'");

// 	return (0);
// }

