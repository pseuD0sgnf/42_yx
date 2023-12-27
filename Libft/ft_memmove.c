/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:25 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/14 19:27:40 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src || n == 0)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		--n;
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}

	// size_t	i;

/* 	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i != 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
		((unsigned char *)dest)[0] = ((unsigned char *)src)[0];
	} */
//	return (dest);

	// DEST  SRC i++
	// (A) B (C) D E F G
	// [C  D  E  F G]F G
	//  G  F  G  F G F G i-- wrong 
	// SRC   DEST i--
	// (A) B (C) D E F G
	//  A  B  A  B C D E
	//  A  B  A  B A B A i++ wrong