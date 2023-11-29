/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:43:14 by yuxchen           #+#    #+#             */
/*   Updated: 2023/11/29 16:20:26 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little == NULL || *little == 0)
		returtn ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[i])
		{
			j = 0;
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[i + j] == 0)
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
