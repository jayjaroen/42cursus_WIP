/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:32:04 by jay               #+#    #+#             */
/*   Updated: 2023/09/10 07:00:11 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //can use the function in this lib? don't need to write again?
#include <stdio.h>
#include <stdlib.h>

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *sub;
  size_t  i;
  size_t  cur;

  i = ft_strlen(&s[start]) - len;
  sub = (char *)malloc(sizeof(char)*(i) + 1);
  cur = 0;
  while (cur < len)
  {
    sub[cur] = s[start];
    cur++;
    start++;
  }
  sub[cur] = '\0';
  return (sub);
}
// int main(void)
// {
//   char a[] = "Hello world";
//   size_t  len;

//   len = ft_strlen(a);
//   printf("%s\n", ft_substr(a, 1, len));
//   return (0);
// }
