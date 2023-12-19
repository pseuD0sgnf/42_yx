/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <yuxchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:56:29 by yuxchen           #+#    #+#             */
/*   Updated: 2023/12/13 20:06:04 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = -n;
		ft_putchar_fd('-', fd);
	}
	else
		num = n;
	if (num < 10)
		ft_putchar_fd(num + '0', fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + '0', fd);
	}
}
