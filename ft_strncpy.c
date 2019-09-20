/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:34:39 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 17:46:35 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	
	i = 0; 
	while (src[i] && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
/*
int	main()
{
	size_t len;
	len = 2;
	char src[] = "pass";
	char dst[1];
	printf("%s", ft_strncpy(dst , src, len));
	printf("\n");
	printf("%s", strncpy(dst, src, len));
	return (0);
} */
