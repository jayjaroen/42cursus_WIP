/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:56:52 by jay               #+#    #+#             */
/*   Updated: 2023/09/09 13:22:42 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void  *ft_calloc(size_t count, size_t size)
{
  void  *str;

  str = malloc(count * size);
  if (str == NULL)
    return (NULL);
  ft_bzero(str, (count * size));// use bzero to initialize the allocated memory to zero
  return (str);
}
/*The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and
/returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.*/
//int main(void)
// {
//   size_t num = 5;
//   size_t size = sizeof(int);

//   int *arr = (int*)calloc(num, size);
//   int *arr2 = (int*)calloc(num, size);
//   printf("the return of calloc: %lu\n", sizeof(arr));
//   printf("the return of my function: %lu\n", sizeof(arr2));
// }
