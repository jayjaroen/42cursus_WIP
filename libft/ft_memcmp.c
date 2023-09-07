/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:53:26 by jay               #+#    #+#             */
/*   Updated: 2023/09/07 21:52:38 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char  *a;
  const unsigned char  *b;
  size_t  i;

  a = (const unsigned char *)s1;
  b = (const unsigned char *)s2;
  i = 0;
  while (i < n)
  {
    if (a[i] != b[i])
      return (a[i] - b[i]);
    i++;
  }
  return (a[i] - b[i]);
}

// int main(void)
// {
//   char a[] = "hello";
//   char b[] = "world";
//   int result = memcmp(a, b , 5);
//   int result1 = ft_memcmp(a, b, 5);
//   printf("the result of memcmp: %d\n", result);
//   printf("the result of my function: %d\n", result1);
// }
