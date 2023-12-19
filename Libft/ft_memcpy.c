/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:50:36 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/14 20:25:11 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest || !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
