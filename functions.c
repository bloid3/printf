/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:36:23 by papereir          #+#    #+#             */
/*   Updated: 2022/12/14 18:10:30 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putnbase(unsigned int number, char *base)
{
	static int	i;
	size_t		numero;

	numero = (size_t)number;
	i = 0;
	if (numero >= ft_strlen(base))
	{
		ft_putnbase(numero / ft_strlen(base), base);
		numero = numero % ft_strlen(base);
	}
	i++;
	ft_putchar(base[numero]);
	return (i);
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
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	i++;
	ft_putchar(num + '0');
	if (n < 0)
		i++;
	return (i);
}
/*
int main(void) {
	ft_printf(" % % ");
	printf(" % % ");
}*/
