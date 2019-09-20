/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:51:24 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 18:19:02 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[i])
			i++;	
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char*)(haystack - i + 1));
		haystack++;
		len--;
	}
	return (NULL);
}
 /*
  * int	main()
  * {
  * 	const char *haystack;
  * 		const char *needle;
  *
  * 			haystack = "this is a string";
  * 				needle = "is";
  * 					printf("%s\n", strstr(haystack, needle));
  * 						printf("%s", ft_strstr(haystack, needle));
  *
  * 						} */
