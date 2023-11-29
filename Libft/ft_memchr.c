/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:04:50 by yuxchen           #+#    #+#             */
/*   Updated: 2023/11/09 19:27:21 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	while (s[i] < n)
	{
			if ((unsigned char)s[i] == (unsigned char)c)
				return (s + i);
			i++;
	}
	return (NULL);
}
