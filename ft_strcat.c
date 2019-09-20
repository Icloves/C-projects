/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:21:55 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 20:37:14 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	//if (*s1 == '\0') //swap with i = 0;
	//	return (s2);
	while (s1[i] != '\0')
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int		main()
{
	char s1[50];
	char s2[50];

	gets(s1);
	gets(s2);
	printf("%s\n", strcat(s2, s1));
	printf("%s", ft_strcat(s2, s1));
	return 0;
}*/
