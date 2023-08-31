/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:15:18 by jjaroens          #+#    #+#             */
/*   Updated: 2023/08/30 22:10:35 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
// can define a global function here - guard

#include <string.h>

int	ft_isalpha(char c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(char *str);
void	*ft_memset(void *ptr, int c, size_t len);
void  ft_bzero(void *s, size_t n);
void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void  *ft_memmove(void *dst, const void *src, size_t len);


#endif
