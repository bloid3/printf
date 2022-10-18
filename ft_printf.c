/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:18 by papereir          #+#    #+#             */
/*   Updated: 2022/10/18 19:56:58 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

	int	ft_percentage(va_list print, char *s)
{
	int	size;

	size = 0;
	if (s == '%') {
		size += ft_putchar('%');
	} else if (s == 'c') {
		size += ft_putchar(print);
	} else if (s == 's') {
		size += ft_putstr(print);
	} else if (s == 'p') {
		size += ft_hexa(print);
	} else if (s == 'i') {
		size += ft_putnbr(print);
	} else if (s == 'u') {
		size += ft_putdec(print);
	} else if (s == 'x') {
		size += ft_puthexamin(print);
	} else if (s == 'X') {
		size += ft_puthexamax(print);
	}
	return (size);
}

int	ft_printf(char const *format , ...)
{
	int		i;
	int		size;
	va_list	print;

	i = 0;
	ft_percentage(print, format);
	va_start(print, format);
	while (format[i]) {
		if (format[i] == '%') {
			size += ft_percentage(print, format[i+1]);
			i++;
		} else {
			size += ft_putchar(format[i]);
		}
	}
	va_end(print);
	return (size);
}
