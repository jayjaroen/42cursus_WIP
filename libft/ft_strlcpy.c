/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:19:43 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 22:49:56 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//strlcpy copies the dstsize - 1 from the source to the destination
//strlcpy return value of the value of the length of string it tries to create
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (!(src) || !(dst) || !dstsize)
		return (srcsize);
	i = 0;
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*int	main(void)
{
	char word[10];
	char src[] = "hellohellohello";
  char word1[10];
	char src1[] = "hellohellohello";

	printf("strlcpy funtion:%zu\n", strlcpy(word, src, 0));
  printf("strclpy function:%s\n", word);
	printf("strlcpy funtion:%zu\n", ft_strlcpy(word1, src1, 0));
  printf("strclpy function:%s\n", word1);
}*/
