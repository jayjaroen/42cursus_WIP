/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:11:36 by jay               #+#    #+#             */
/*   Updated: 2023/09/06 21:27:53 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
//The memchr() function locates the first occurrence of c (converted to an
//unsigned char) in string s.

void  *ft_memchr(const void *s, int c, size_t n)
{
  size_t  i;
  unsigned char a;
  char  *str;

  i = 0;
  a = (unsigned char)c; //use the unsigned char to match with the return type of memchar
  str = (char *)s;
  while (i < n)
  {
    if (str[i] == a)
      return (void*)(str+i);
    i++;
  }
  return NULL;
}

// int main(void)
// {
//   char str[] = "Hello world";
//   char word = 'd';
//   size_t len = strlen(str);

//   char *result = memchr(str, word, len);
//   char *result1 = ft_memchr(str, word, len);
//   printf("the result of memchar: %s\n", result);
//   printf("the result of my function: %s\n", result1);
// }
