/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:55:46 by papereir          #+#    #+#             */
/*   Updated: 2022/10/25 19:50:03 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const	*format, ...);
int		ft_putchar(int c);
int		ft_putstr(char	*s);
int		ft_percentage(va_list print, char s);
int		ft_puthexa(unsigned long n);
int		ft_putnbr(int n);
int		ft_putadd(void	*n);
#endif
