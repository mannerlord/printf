/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:58:00 by fdertlio          #+#    #+#             */
/*   Updated: 2024/12/04 23:05:10 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_len(unsigned int num)
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

static void	ft_put_hex(unsigned int num, char c)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, c);
		ft_put_hex(num % 16, c);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else if (c == 'X')
			ft_putchar(num - 10 + 'A');
		else
		{
			ft_putchar(num - 10 + 'a');
		}
	}
}

int	ft_hex(unsigned int num, char c)
{
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	ft_put_hex(num, c);
	return (ft_hex_len(num));
}
