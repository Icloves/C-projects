/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 22:49:15 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/25 22:50:32 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;
	int res;

	i = 1;
	while (nb / 2 > i)
	{
		i++;
		res = i * i;
		if (res == nb)
			return (i);
	}
	return (0);
}