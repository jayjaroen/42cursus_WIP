/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:14:22 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/09 21:08:20 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Description: The strchr() function locates the first occurrence of c
//(converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string;
// therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
// Return: The functions strchr() and strrchr() return a pointer to the
// located character, or NULL if the character does not appear in the string.
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || (!*s && (char)c == 0))
		return ((char *)s);
	else
		return (NULL);
}
