/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:30:08 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/17 20:05:37 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *buf;

	buf = (int*)malloc(sizeof(int) * 100);
	memset(buf, '\0', sizeof(buf));
	memset(buf, '1', 9);
	printf("%s", (char*) buf);
	free(buf);
	return (0);
}
