/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:12:10 by jay               #+#    #+#             */
/*   Updated: 2023/09/09 09:18:49 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  const unsigned char *str;
  const unsigned char *word;
  size_t  i;

  str = (const unsigned char *)haystack;
  word = (const unsigned char *)needle;
  i = 0;
  if (*word == '\0')
    return (char *)str;
  while (i < len)
  {
    while (str[i] == word[i])
    {
      if (word[i] == '\0')
        return (char*)&str[i];
      i++;
    }
    i = 0;
  }
  return(NULL);
}

// int main(void)
// {
//   char haystack[] = "I don't love you anymore";
//   char needle[] = "hah";
//   // size_t len = strlen(haystack);
//   printf("the result of strnstr: %s\n", strnstr(haystack, needle, 5));
//   printf("the result of my function: %s\n", strnstr(haystack, needle, 5));
// }
