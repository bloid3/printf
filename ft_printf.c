/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:18 by papereir          #+#    #+#             */
/*   Updated: 2022/12/14 18:17:33 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_percentage(va_list print, char s)
{
	int	size;

	size = 0;
	if (s == '%')
		size += ft_putchar('%');
	else if (s == 'c')
		size += ft_putchar(va_arg(print, int));
	else if (s == 's')
		size += ft_putstr(va_arg(print, char *));
	else if (s == 'p')
		size += ft_putadd(va_arg(print, void *));
	else if (s == 'i')
		size += ft_putnbr(va_arg(print, int));
	else if (s == 'd')
		size += ft_putnbr(va_arg(print, int));
	else if (s == 'u')
		size += ft_putnbase(va_arg(print, int), "0123456789");
	else if (s == 'x')
		size += ft_putnbase(va_arg(print, int), "0123456789abcdef");
	else if (s == 'X')
		size += ft_putnbase(va_arg(print, int), "0123456789ABCDEF");
	return (size);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	int		size;
	va_list	print;

	i = 0;
	size = 0;
	va_start(print, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			size += ft_percentage(print, s[i + 1]);
			i++;
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(print);
	return (size);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_puthexa(unsigned long int nbr)
{
	char		*base;
	static int	i;

	i = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthexa(nbr / 16);
		nbr = nbr % 16;
	}
	i++;
	ft_putchar(base[nbr]);
	return (i);
}
