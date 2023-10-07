/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:50:04 by jay               #+#    #+#             */
/*   Updated: 2023/10/07 11:58:46 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: The strdup() function allocates sufficient memory for 
              a copy of the string s1, does the copy, and returns 
              a pointer to it.  The pointer may subsequently be 
              used as an argument to the function free(3).
              If insufficient memory is available, 
              NULL is returned and errno is set to ENOMEM.
              The strndup() function copies at most n characters
               from the string s1 always NUL terminating the copied string.
*/
char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen (s1);
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
