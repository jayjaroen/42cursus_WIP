/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:22:54 by jay               #+#    #+#             */
/*   Updated: 2023/09/15 21:26:58 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//s1: The string to be trimmed
//set: The reference set of characters to trim
//return: The trimmed string (after set is removed from s1)
char  *ft_strtrim(char const *s1, char const *set)
{
  char  *trim;
  size_t len;
  size_t  start;
  size_t  end;

  if (!s1 || !set)
    return (NULL);
  len = ft_strlen(s1);
  start = 0;
  end = len - 1;
  // 1. check if the set character is found in S1 at the begining and at the end
  // 2. identify the location of where to trim the string by locating the start & end point
  while (start < end && ft_strchr(set, s1[start]) != NULL) // if NULL then not found the match
    start++;
  while (end > start && ft_strchr(set, s1[end]) != NULL)
    end--;
  trim = (char *)malloc(sizeof(char) * (end - start + 2));
  ft_strlcpy(trim, s1 + start, end - start + 2);
  return (trim);
}
// int main(void)
// {
//   printf("%s\n", ft_strtrim("    I don't hate you, but I don't care either", " "));
// }
