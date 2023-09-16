/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:13:14 by jay               #+#    #+#             */
/*   Updated: 2023/09/16 16:59:38 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int main(void)
// {
//   char source[] = "hello world";
//   char dest[20];
//   char source1[] = "hello world";
//   char dest1[20];

//   memcpy(dest, source, sizeof(source));
//   ft_memcpy(dest1, source1, sizeof(source1));
//   printf("this is the result of memcpy: %s\n", dest);
//   printf("this is the result from my function: %s\n", dest1);
//   return (0);
// }
