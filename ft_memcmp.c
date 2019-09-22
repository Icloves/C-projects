/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:12:42 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/22 21:03:46 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptrs1;
	unsigned char *ptrs2;
	size_t i;

	ptrs1 = (unsigned char*)s1;
	ptrs2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*ptrs1 != *ptrs2)
			return (*ptrs1 - *ptrs2);
		ptrs1++;
		ptrs2++;
	}
	return (0);
}
/*
int main()
{
	const char s1[10] = "qwerty";
	const char s2[10] = "qwerty";
	size_t n = 5;
	ft_memcmp(s1, s2, n);
}*/
