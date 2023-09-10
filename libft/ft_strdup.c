/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:50:04 by jay               #+#    #+#             */
/*   Updated: 2023/09/09 14:19:51 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char  *ft_strdup(const char *s1)
{
  char  *copy;
  size_t len;
  size_t i;

  len = ft_strlen(s1);
  copy = (char *)malloc(sizeof(char)*len + 1);
  if (copy == NULL)
    return (NULL);
  i = 0;
  while (s1[i] != '\0')
  {
    copy[i] = s1[i];
    i++;
  }
  copy[i] = '\0';
  return (copy);
}
// int main(void)
// {
//   const char *a = "Hello World";
//   char *b = strdup(a);
//   char *c = ft_strdup(a);
//   printf("the result of strdup: %s\n", b);
//   printf("the result of my function: %s\n", c);
//   return (0);
// }
