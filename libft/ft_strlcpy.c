/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:19:43 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 12:16:23 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;
	
	if (!(src) && !(dst))
		return (0);
	i = 0;
	srcsize = ft_strlen(src);
	if (!(dst))
		return (srcsize);
	while (*src && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*int	main(void)
{
	char word[50];
	char a[] = "hello";
	char b[] = "World";
	size_t len;

	strcpy(word, a);
	printf("strcpy funtion:%s\n", word);
	len = strlcpy(word, b, sizeof(word));
	printf("strlcpy function: %zu\n", len);
}*/
