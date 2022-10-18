/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:55:46 by papereir          #+#    #+#             */
/*   Updated: 2022/10/18 16:54:02 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup(const char	*s1);
int		ft_atoi(const char	*str);
void	ft_bzero(void	*s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
void	*ft_memset(void	*str, int c, size_t n);
size_t	ft_strlen(const char	*str);
int		ft_isprint(int c);
void	*ft_memchr(const void	*s, int c, size_t n);
int		ft_memcmp(const void	*ptr1, const void	*ptr2, size_t num);
void	*ft_memcpy(void	*dest, const void	*src, size_t n);
void	*ft_memmove(void	*str1, const void	*str2, size_t n);
char	*ft_strchr(const char	*str, int c);
size_t	ft_strlcat(char	*dest, const char	*src, size_t n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t size);
int		ft_strncmp(const char	*str1, const char *str2, size_t n);
char	*ft_strnstr(const char	*big, const char	*little, size_t len);
char	*ft_strrchr(const char	*str, int c);
char	*ft_substr(char const	*s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strtrim(char const	*s1, char const	*set);
char	**ft_split(char const	*s, char c);
char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_striteri(char	*s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char	*s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char	*s, int fd);
int		ft_printf(char	*args ,...);

#endif