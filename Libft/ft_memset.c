/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:27 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/14 20:19:39 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*set;

	if (!s)
		return (NULL);
	i = 0;
	set = (unsigned char *)s;
	while (i < n)
	{
		set[i++] = (unsigned char)c;
	}
	// 0 0 0 0 0 0
	// 1 1 1 1 1 1
	return (s);
}
