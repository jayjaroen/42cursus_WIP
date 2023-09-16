/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:15:05 by jay               #+#    #+#             */
/*   Updated: 2023/09/16 16:42:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
/*int main(void)
{
  char word[12];
  char word1[12];
  char word3[4];

  strcpy(word, "hello world");
  strcpy(word1, "hello world");
  strcpy(word3, "ab");
  printf("Before bezero: %s\n", word);
  printf("Before my function: %s\n", word1);
  bzero(word, 1);
  ft_bzero(word1, 1);
  bzero(word3, 1);
  printf("the result of bezero: %s\n", word);
  printf("the result of my function: %s\n", word1);
  printf("the result of bezero: %s\n", word3);
  return (0);
}*/
