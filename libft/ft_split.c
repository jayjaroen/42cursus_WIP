/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:14:08 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 17:43:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.
Parameters: 1) s = the string to be split; 2) c = the delimiter character
Return: the array oof new strings resulting from the split
        NULL if the allocation fails.
*/
static size_t	ft_count_sub(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) != '\0' && *(s + i) == c)
			i++;
		if (*(s + i) != '\0')
			count++;
		while (*(s + i) != '\0' && *(s + i) != c)
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	return (i);
}

static char	*sub(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = word_len(s, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(word + i) = *(s + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

static void	free_array(size_t i, char **str)
{
	size_t	j;

	j = 0;
	while (i > j)
	{
		free(*(str + j));
		j++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new = (char **)ft_calloc((ft_count_sub (s, c) + 1), sizeof(char *));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			*(new + i) = sub(s, c);
			if (*(new + i) == NULL)
			{
				free_array(i, new);
				return (NULL);
			}
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	return (new);
}
