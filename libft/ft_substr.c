/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:32:04 by jay               #+#    #+#             */
/*   Updated: 2023/09/26 22:05:11 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Allocates (with malloc(3)) and returns a substring
              from the string ’s’.
              The substring begins at index ’start’ and is of
              maximum size ’len’.
Parameters: s:  The string from which to create the substring.
            start:  The start index of the substring in the
            string ’s’.
            len:  The maximum length of the substring.
Return: The substring.
        NULL if the allocation fails.
Think about if len is greater string || starting index is greater than string
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	if (start > s_len)
	{
		start = s_len;
		len = 0;
	}
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}
