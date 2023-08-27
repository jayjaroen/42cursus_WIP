/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:32:30 by jjaroens          #+#    #+#             */
/*   Updated: 2023/08/27 15:22:30 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	//memset() return its first argument 
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < len)
	{
		*p = (unsigned char)c;
		i++;
		p++;
	}
	return (ptr);
}

int	main(void)
{
	char word[10];
	char string[5];

	printf("the result of memset:  %s\n", memset(word, 'J', 5));
	printf("the result of my function: %s\n", ft_memset(word, 'J', 5));
	
	printf("the result of memset:  %s\n", memset(string, 'A', 3));
	printf("the result of my function: %s\n", ft_memset(string, 'A', 3));
	
	printf("the result of memset:  %s\n", memset(string, 'Y', 1));
	printf("the result of my function: %s\n", ft_memset(string, 'Y', 1));

}
