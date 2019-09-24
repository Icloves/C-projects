/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:03:55 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/24 18:16:18 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int        ft_clen(int n)
{
	int len;

	len = 0;
	while (n /= 10)
		len++;
	return (len + 1);
}

char    *ft_itoa(int n)
{
	int sign;
	int i;
	int count;
	char *numstr;
	char *numstr2;

	i = 0;
	sign = (n < 0) ? 1 : 0;
	if (sign)
		n *= -1;
	count = ft_clen(n);
	if ((numstr = (char *)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (i < count)
	{
		numstr[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (!(numstr2 = (char *)malloc(sizeof(char *) * (count + 2))))
		return (NULL);
	count = 0;
	if (sign)
		numstr2[count++] = '-';
		//count++;
	i--;
	while (i >= 0)
		numstr2[count++] = numstr[i--];
		//i--;
		//count++;
	numstr2[count] = '\0';
	return (numstr2);
}

int main()
{
	size_t n;
	n = -103120;
	printf("%s", ft_itoa(n));
	return 0;
}
