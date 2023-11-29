/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:56:26 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/31 16:22:42 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	cat_len;
	unsigned int	result;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	cat_len = 0;
	if (size < dest_len)
		result = src_len + size;
	else
		result = dest_len + src_len;
	if (size > 0)
	{
		while (dest_len + cat_len < size - 1 && src[cat_len])
		{
			dest[dest_len + cat_len] = src[cat_len];
			cat_len++;
		}
		dest[dest_len + cat_len] = '\0';
	}
	return (result);
}
