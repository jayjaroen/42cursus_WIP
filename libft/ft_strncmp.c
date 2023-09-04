/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:32:04 by jay               #+#    #+#             */
/*   Updated: 2023/09/04 22:26:54 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;

  i = 1;
  while ((i < n) && *s1)
  {
    if (*s1 != *s2)
      return (*s1 - *s2);
    s1++;
    s2++;
    i++;
  }
  return (*s1 - *s2);
}

// int main(void)
// {
//   printf("%d\n", strncmp("hithere","hipo", 4));
//   printf("%d\n", ft_strncmp("hithere","hipo", 4));
// }
