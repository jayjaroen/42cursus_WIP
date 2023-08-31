/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:10:51 by jay               #+#    #+#             */
/*   Updated: 2023/08/31 22:58:49 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void  *ft_memmove(void *dst, const void *src, size_t len)
{
  // return the original value of dst
  size_t  i;
  char *d;
  char *s;

  d = (void *)dst;
  s = (void *)src;
  i = 0;
  while (i < len)
  {
    d[i] = s[i];
    i++;
  }
  return (dst);
}

// int main(void)
// {
//   char buffer[80];
//   char a[] = "hellodfdffdfd";

//   strcpy(buffer, "World");
//   ft_memmove(buffer, a, 79);
//   printf ("%s\n", buffer);
//   return (0);
// }
