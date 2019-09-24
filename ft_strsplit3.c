/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:35:13 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/24 13:35:49 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	char **ptrs;
	size_t len;
	size_t count;
	size_t j;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	//посчитать слова
	if (!(ptrs = (char **)malloc(sizeof(char *) * (len + 1))) || !s)//память на слова+1
		return (NULL);
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != c)
	{
		i++;
		count++;
		ptrs[count] = s[i];
	}
	return (ptrs);
}

int	main()
{
	char s[10] = "*hello*";
	printf("%s", *ft_strsplit(s, '*'));
	return (0);
}
