/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:10:51 by jay               #+#    #+#             */
/*   Updated: 2023/09/16 18:05:28 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
// description: memmove copies len bytes from string src to string dst. The two
// strings may overlap; the copy is always done is a non-destructive manner
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst == NULL && src == NULL))
		return (NULL);
	if (src < dst)
	{
		while (len-- != 0)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	}
	else
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*int main(void)
{
	char buffer[80];
	char a[] = "hellodfdffdfd";

	strcpy(buffer, "World");
	ft_memmove(buffer, a, 79);
	printf ("%s\n", buffer);
	// overlapse test case
	char buffer2[5];
	char b[] = "whatwhatwhatwhatwhat";
	ft_memmove(buffer2,b,4);
	printf("%s\n", buffer2);
	return (0);
}*/
