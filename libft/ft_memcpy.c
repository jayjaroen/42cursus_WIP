/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:13:14 by jay               #+#    #+#             */
/*   Updated: 2023/08/28 22:48:59 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  unsigned char *d; // only positive value 0 - 255
  unsigned char *s; // why can't copy directly, but need to create a variable first?
  size_t i;

  d = (void *)dst;
  s = (void *)src;
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
