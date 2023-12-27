/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:28:13 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/13 16:14:26 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_abs(int n)
// {
// 	if (n >= 0)
// 		return (n);
// 	else
// 		return (-n);
// }

static size_t	ft_get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

// char *handle_int_min(void)
// {
// 	return(ft_strdup("-21345"))
// }

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*str;
	size_t			len;

	len = ft_get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	else
		num = n;
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

/* #include <stdio.h>
#include <limits.h>
int main(void)
{
	char *s = ft_itoa(INT_MAX);
	printf("%s\n", s);
	free(s);
} */