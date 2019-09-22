/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 15:29:54 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/21 17:19:20 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (*s)
		s++;
	while (*s != c)
		s--;
	return ((char*)s);
}
/*
int	main()
{
	char s[11] = "12314";
	int c = '.';
	printf("%s\n", strrchr(s,c));
	printf("%s\n", ft_strrchr(s,c));
	return (0);
}*/
