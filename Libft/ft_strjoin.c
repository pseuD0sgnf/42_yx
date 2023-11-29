/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:23:57 by yuxchen           #+#    #+#             */
/*   Updated: 2023/11/29 16:58:39 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     i;
    int     j;

    join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
    if (!join)
        return (NULL);
    while (s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        join[i + j] = s2[j];
        i++;
    }
    join[i + j] = '\0';
    retrurn (join);
}
