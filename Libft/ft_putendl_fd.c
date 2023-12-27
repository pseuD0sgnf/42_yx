/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:54:12 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/13 19:56:02 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// Could be faster
// char *to_write = (char *)malloc(ft_strlen(s) + 2);
// 	ft_strlcpy(to_write, s, ft_strlen(s) + 1);
// 	to_write[ft_strlen(s)] = '\n';
// 	to_write[ft_strlen(s) + 1] = '\0';
// 	free(to_write);

// To test the time
	// __TIME__
	// __LINE__
	// __FILE__