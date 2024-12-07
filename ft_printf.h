/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:54:10 by fdertlio          #+#    #+#             */
/*   Updated: 2024/12/04 21:58:12 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_type(const char *str, size_t i, va_list args);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr(long n);
int	ft_hex(unsigned int num, char c);
int	ft_void_ptr(unsigned long long num);

#endif
