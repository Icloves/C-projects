/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:29:22 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/05 18:17:52 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
