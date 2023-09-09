/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:30:42 by jay               #+#    #+#             */
/*   Updated: 2023/09/09 10:57:15 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
  char *ptr;
  int num;
  int sign;

  sign = 1;
  ptr = (char *)str;
  while ((*ptr < 48 && *ptr > 57) || (*ptr != '-' || *ptr != '+'))
    return (0);
  if (*ptr == '-')
    sign = -1;
  while ((*ptr >= 48 && *ptr <= 57))
  {
    ptr++;
    num = *ptr - 48;
    num *= 10;
  }
  return (sign*num);
}

// int main(void)
// {
//   printf("the return of atoi function is: %d\n", atoi("   pod-+-+--34dfdf2"));
//   printf("the return of atoi function is: %d\n", atoi("-+34dfdf2"));
//   printf("the return of my function is: %d\n", atoi("   pod-+-+--34dfdf2"));
//   printf("the return of my function is: %d\n", atoi("-+34dfdf2"));
//   printf("the return of atoi function is: %d\n", atoi("090pod-+-+--34dfdf2"));
//   printf("the return of my function is: %d\n", atoi("090pod-+-+--34dfdf2"));
// }
