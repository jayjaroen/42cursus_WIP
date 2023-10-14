/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:15:44 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/14 16:26:57 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The strcmp() and strncmp() functions lexicographically 
		compare the null-terminated strings s1 and s2.

     	The strncmp() function compares not more than n characters.  
		Because strncmp() is designed for comparing strings rather than 
		binary data, characters that appear after a `\0' character 
		are not compared.

The strcmp() and strncmp() functions return an integer greater than, 
		equal to, or less than 0, according as the string s1 is greater 
		than, equal to, or less than the string s2. 
		The comparison is done using **unsigned characters**, 
		so that `\200' is greater than `\0'.
*/
#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && i < n)
	{
		s1++;
		s2++;
		i++;
		x++;
	}
	printf("looping:%zu\n", x);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
int	main(void)
{
	printf("the result of strncmp: %d\n", strncmp("abcdfe", "abcdfe", 4));
	printf("the result of my function: %d\n", ft_strncmp("abcdfe", "abcdfe", 4));
}
