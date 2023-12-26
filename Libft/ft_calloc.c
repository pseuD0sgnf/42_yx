/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:52:41 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/14 20:30:27 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	bsize;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	bsize = nmemb * size;
	if (bsize < nmemb || bsize < size)
		return (NULL);
	p = malloc(bsize);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
