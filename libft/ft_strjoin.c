/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:02:43 by jay               #+#    #+#             */
/*   Updated: 2023/10/07 12:04:09 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Allocates (with malloc(3)) and returns a new string, 
              which is the result of the concatenation of ’s1’ and ’s2’.
Parameters: s1: The prefix string.
            s2: The suffix string.
Return value: The new string. Null if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	c;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	c = 0;
	while (c < len2)
		new[i++] = s2[c++];
	new[i] = '\0';
	return (new);
}
