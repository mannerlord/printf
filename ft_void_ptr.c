/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:14:46 by fdertlio          #+#    #+#             */
/*   Updated: 2024/12/04 23:54:40 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned long long num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

static void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_void_ptr(unsigned long long num)
{
	int	size;

	if (num == 0)
	{
		size = ft_putstr("(nil)");
	}
	else
	{
		ft_putstr("0x");
		size = 2;
		if (num == 0)
			size += ft_putchar('0');
		else
		{
			size += ft_ptr_len(num);
			ft_put_ptr(num);
		}
	}
	return (size);
}
