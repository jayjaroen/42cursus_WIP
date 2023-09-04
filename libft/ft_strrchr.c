/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:53:35 by jay               #+#    #+#             */
/*   Updated: 2023/09/03 22:39:29 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include "stdio.h"

char  *ft_strrchr(const char *s, int c)
{
  unsigned char w;
  char  *str;
  size_t i;

  i = ft_strlen(s) - 1;
  w = (unsigned char)c;
  str = (char*)s;
  while (i)
  {
    if (str[i] == w)
      return(&str[i]);
    i--;
  }
  return (NULL);
}

/*int	main(void)
{
	char word[] = "Hello worlddd4";
	char target = '4';
  char word2[] = "Hello worldd4";
	char target2 = '4';
	char *result;
  char *result2;

	result = strrchr(word,target);
  result2 = ft_strrchr(word2, target2);
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
