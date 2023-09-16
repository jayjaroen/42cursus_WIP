/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:35:23 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 14:37:29 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	len = ft_strlen(dst);
	i = 0;
	if (!(dst) && !dstsize)
		return (srcsize);
	while (*src && (len + 1 < dstsize))
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(dst));
}

/*int	main(void)
{
	char a[50];
	char b[] = "This is";
	char c[] = "cat";
	size_t len;

	strcpy(a, b);
	len = strlcat(a, c, sizeof(a));
	printf("%s\n", a);
	printf("%zu\n", len);
}*/
