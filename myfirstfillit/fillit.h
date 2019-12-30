/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:35:32 by hcloves           #+#    #+#             */
/*   Updated: 2019/10/31 16:51:14 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "get_next_line.h"
# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_tetr {
    char coordx;
    int coordy;
    int x[4];
    int y[4];
    struct s_tetr * next;
} t_tetr;

int     main(void);
int		get_next_line(const int fd, char **line);
int	check_elements(char *tetr);
int check_side(char *tetr);

#endif
