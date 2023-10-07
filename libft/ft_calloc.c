/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:56:52 by jay               #+#    #+#             */
/*   Updated: 2023/10/07 11:52:51 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The malloc(), calloc(), valloc(), realloc(), and reallocf() 
              functions allocate memory.  The allocated memory is aligned 
              such that it can be used for any data type, 
              including AltiVec- and 
              SSE-related types.  The aligned_alloc() function
              allocates memory with the requested alignment.  
              The free() function frees allocations that were created 
              via the preceding allocation functions.
The calloc() function contiguously allocates enough space 
for count objects that are size bytes of memory each and returns 
a pointer to the allocated memory.  
Return: The allocated memory is filled with bytes of value zero.***
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (count * size));
	return (str);
}
