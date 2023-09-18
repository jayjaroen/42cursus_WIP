/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:35:23 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/18 22:53:51 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Behavior: strlcat append string src to the end of dest.
// Strlcat append at most dstsize - strlen(dst) - 1
// Parameters: dst (src to be appended), src,
//             dstsize (maximum size of destination buffer + null terminator)
//             that can be store in dst
// Return: the initial length of dst + the length of src.
// strlcat ensures that the concatenated result will fit within
// the destination buffer without causing a buffer overflow.
// If the truncation occured, it returned the destination string
// plus the number that would have been copied, but not more than size - 1
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
