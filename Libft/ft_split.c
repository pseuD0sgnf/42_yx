/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:25:42 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/19 12:08:14 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strs(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_do_split(char const *s, char c, int *i_str)
{
	int		i;
	char	*str;
	size_t	count_str;

	while (s[*i_str] == c)
		i_str++;
	i = *i_str;
	count_str = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count_str++;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (count_str + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + *i_str, count_str);
	return (str);
}

static void	ft_failed(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count_strs;
	int		i_strs;
	int		i_str;

	if (!s)
		return (NULL);
	count_strs = ft_count_strs(s, c);
	strs = (char **)malloc(sizeof(char *) * (count_strs + 1));
	if (!strs)
		return (NULL);
	i_str = 0;
	i_strs = 0;
	strs[count_strs] = NULL;
	while (i_strs < count_strs)
	{
		strs[i_strs] = ft_do_split(s, c, &i_str);
		if (!strs[i_strs])
			ft_failed(strs);
		i_strs++;
	}
	return (strs);
}
