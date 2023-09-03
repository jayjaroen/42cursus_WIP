/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:53:35 by jay               #+#    #+#             */
/*   Updated: 2023/09/03 22:26:52 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include "stdio.h"

char  *ft_strrchr(const char *s, int c)
{
  unsigned char w;
  char  *str;
  char *tmp;
  int i;

  i = 0;
  w = (unsigned char)c;
  str = (char*)s;
  tmp = NULL;
  while (str[i] != '\0')
  {
    if (str[i] == w)
    {
      tmp = &str[i];
    }
    i++;
  }
  return (tmp);
}

/*int	main(void)
{
	char word[] = "Hello worlddd4";
	char target = 'p';
  char word2[] = "Hello worldd4";
	char target2 = 'p';
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
