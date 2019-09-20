/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:50:37 by hcloves           #+#    #+#             */
/*   Updated: 2019/09/20 20:48:04 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
