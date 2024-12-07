/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:08:55 by fdertlio          #+#    #+#             */
/*   Updated: 2024/12/03 21:13:11 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	char	c;
	long	size;

	size = 0;
	if (n < 0)
	{
		size = 1;
		n = n * -1;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		size += ft_putnbr(n / 10);
		size += ft_putnbr(n % 10);
	}
	else
	{
		c = '0' + n;
		size += write(1, &c, 1);
	}
	return (size);
}
