/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:15:18 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/09 09:23:14 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>

int	ft_isalpha(char c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);//sep2
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char  *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);//sep 4
void  *ft_memchr(const void *s, int c, size_t n);//sep 5
int ft_memcmp(const void *s1, const void *s2, size_t n);//sep 6
char  *ft_strnstr(const char *haystack, const char *needle, size_t len);//sep7
int ft_atoi(const char *str);//sep 9
#endif
