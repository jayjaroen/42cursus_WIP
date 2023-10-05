/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:22:54 by jay               #+#    #+#             */
/*   Updated: 2023/10/05 09:13:49 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Descritption: Allocates (with malloc(3)) and returns a copy
of’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Parameters: s1: The string to be trimmed
            set: The reference set of characters to trim
return: The trimmed string.
        NULL if the allocation fails.
1. check if the set character is found in S1 at the begining and at the end
2. identify the location of where to trim the string by locating the start 
& end point
3. how to deal with full blank / empty blank input
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, *(s1 + start)))
		start++;
	while (end > start && ft_strchr(set, *(s1 + end - 1)))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trim == NULL)
		return (NULL);
	i = 0;
	ft_strlcpy(trim, s1 + start, end - start + 1);
	return (trim);
}
