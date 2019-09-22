/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:02:01 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/22 20:11:58 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptrs;
	ptrs = (unsigned char*)s;
	while (n--)
	{
		if (*ptrs == (unsigned char)c)
			return (ptrs);
		ptrs++;
	}
	return (NULL);
}
/*
int	main()
{
	size_t n = 5;
	unsigned char s[15] = "roflan";
	unsigned char c = 'l';

	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
	return (0);
}*/
