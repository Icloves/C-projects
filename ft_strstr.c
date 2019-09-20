/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:39:15 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 17:46:08 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{	
	int	i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack)
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char*)(haystack - i + 1));
		haystack++;
	}
	return (NULL);
}
 /*
int	main()
{
	const char *haystack;
	const char *needle;

	haystack = "this is a string";
	needle = "is";
	printf("%s\n", strstr(haystack, needle));
	printf("%s", ft_strstr(haystack, needle));

} */
