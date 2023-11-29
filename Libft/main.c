/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:47:47 by yuxchen           #+#    #+#             */
/*   Updated: 2023/10/30 16:55:03 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	src[20] = "Kapibara";
	char	*dst;

	if (!(dst = (char *)malloc(20 * sizeof(char))))
			return (0);
	printf("len is %zu, dst is %s", ft_strlcpy(dst, src, 5), dst);
}
