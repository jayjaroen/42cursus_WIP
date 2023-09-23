/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:11:36 by jay               #+#    #+#             */
/*   Updated: 2023/09/23 15:24:10 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: The memchr() function locates the first occurrence of c 
			(converted to an unsigned char) in string s.
Return: The memchr() function returns a pointer to the byte located, 
		or NULL if no such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	i = 0;
	a = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
