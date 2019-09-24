/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:03:55 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/24 14:55:33 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char sign;
	size_t i;
	size_t count;
	char *numstr;
	size_t temp;

	i = 0;
	count - 0;
	temp = n;
	if (n < 0)
	{
		sign = '-';
		n *= -1;
	}
	if (n == 0)
		return ('0');
	while (n % 10)
	{
		count++;
		n = n / 10;
	}
	if ((numstr = (char)malloc(sizeof(char *) * count + 1)))
	{
		while (i < count)
		{
			numstr[i] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
	}
	count[i] = '\0';
	return (numstr);
}
