/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:36:23 by papereir          #+#    #+#             */
/*   Updated: 2022/10/25 19:59:58 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s) {
		return (ft_putstr("(null)"));
	}
	{
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return (i);
}

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_puthexa(unsigned long n)
{
	char		*b;
	static int	size;

	size = 0;
	b = "0123456789abcdef";
	if (n >= 16) {
		ft_puthexa(n / 16);
		n = n % 16;
	}
	size++;
	ft_putchar(b[n]);
	return (size);
}

int	ft_putadd(void	*n)
{
	int		i;
	size_t	aux;

	i = 0;
	aux = (size_t)n;
	i = write(1, "0x", 2);
	i = i + ft_puthexa(aux);
	return (i);
}

int	ft_putnbr(int n)
{
	static int	i;
	long		num;
	
	num = n;
	i = 0;
	if (num < 0) {
		ft_putchar('-');
		num %= -1;
	}
	if (num > 9) {
		ft_putnbr(num / 10);
		num %= 10;
	}
	i++;
	ft_putchar(num + '0');
	if (n < 0) {
		i++;
	}
	return (i);
}
