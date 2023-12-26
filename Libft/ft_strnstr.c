/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:43:14 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/14 20:28:37 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	llen;

	if (little == NULL || *little == 0)
		return ((char *)big);
	i = 0;
	llen = ft_strlen(little);
	while (i < len && big[i])
	{
		if (big[i] == little[0] && len - i >= llen
			&& ft_strncmp(big + i, little, llen) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
