/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:02:43 by jay               #+#    #+#             */
/*   Updated: 2023/09/10 07:13:19 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2)
{
  char  *new;
  size_t len1;
  size_t len2;
  size_t i;
  size_t c;

  len1 = ft_strlen(s1);
  len2 = ft_strlen(s2);
  new = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
  if (new == NULL)
    return (NULL);
  i = 0;
  while (i < len1)
  {
    new[i] = s1[i];
    i++;
  }
  c = 0;
  while (c < len2)
    new[i++] = s2[c++];
  new[i] = '\0';
  return (new);
}
// int main(void)
// {
//   printf("%s\n", ft_strjoin("hello", "world"));
// }
