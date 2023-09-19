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
// Description: The strrchr() function is identical to strchr(), 
//except it locates the last occurrence of c.
// Return value: The functions strchr() and strrchr() return a pointer
// to the located character, or NULL if the character does not appear in the string.
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = ft_strlen(s);
	while (i != 0 && *(s + i) != c)
		i--;
	if (c == *(s + i))
		return ((char *)(s + i));
	else if ( c == *s)
		return ((char *)s);
	else
		return (NULL);
}
