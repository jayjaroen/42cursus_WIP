/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:40:46 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/15 21:26:48 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char a;
	char	*str;
  int i;

  a = (unsigned char)c;
  str = (char *)s;
  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == a)
      return(&str[i]);
    i++;
  }
  return (NULL);
}
/*int	main(void)
{
	char word[] = "Hello world";
	char target = 'W';
  char word2[] = "Hello world";
	char target2 = 'W';
	char *result;
  char *result2;

	result = strchr(word,target);
  result2 = ft_strchr(word2, target2);
  if (result != NULL)
    printf("the result of strchr: %c\n", *result);
  if (result == NULL)
    printf("not found\n");
  if (result2 != NULL)
    printf("the result of my function: %c\n", *result2);
  if (result2 == NULL)
    printf("not found\n");
  return(0);
}*/
