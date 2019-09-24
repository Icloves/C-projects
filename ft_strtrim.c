/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:35:42 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/23 21:25:29 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	char *ptrs;
	size_t len;
	size_t temp;
	//size_t j;

	len = ft_strlen(s);
	if (!(ptrs = (char *)malloc(sizeof(char *) * (len + 1))) || !s)
			return (NULL);
	temp = 0;
	i = 0;
	len--;
	if (s[0] == '\n' || s[0] == '\t' || s[0] == ' ')
		while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
			i++;
	if (i > len || s[i] == '\0')
		return (ft_strncpy(ptrs, s, (i - len - 1)));
	if (s[len] == '\n' || s[len] == '\t' || s[len] == ' ') 
		while (s[len] == '\n' || s[len] == '\t' || s[len] == ' ')
			len--;
	while (i <= len)
	{
		ptrs[temp] = s[i];
		i++;
		temp++;
	}
	ptrs[temp] = '\0';
	return (ptrs);
}
