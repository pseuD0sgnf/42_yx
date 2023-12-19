/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:32:01 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/19 11:55:52 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;
	size_t	len_sub;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	len_sub = 0;
	if (start < len_s)
		len_sub = len_s - start;
	if (len_sub > len)
		len_sub = len;
	if (!len_sub)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * len_sub);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len_sub + 1);
	return (sub);
}
