/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:44:21 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 21:53:54 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] && (j < n))
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*
int		main()
{
	char s1[50];
	char s2[50];
	size_t n;
	n = 3;
	gets(s1);
	gets(s2);
	printf("%s\n", strcat(s2, s1));
	printf("%s", ft_strcat(s2, s1));
	return 0;
}*/
