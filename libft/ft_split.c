/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:14:08 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/12 22:23:16 by jjaroens         ###   ########.fr       */
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

static void	free_array(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
}

static void	ft_allocate(char **new, char const *s, char c)
{
	size_t	len;
	char	**tmp;

	tmp = new;
	while (*s != '\0')
	{
		len = 0;
		while (*s != '\0' && *s == c)
			s++;
		while (*s != '\0' && *s != c)
		{
			s++;
			len++;
		}
		if (len)
		{
			*new = (char *)malloc((sizeof(char)) * len + 1);
			if (*new == NULL)
			{
				free_array(tmp);
				return ;
			}
			ft_strlcpy(*(new++), s - len, len + 1);
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (s == NULL)
		return (NULL);
	new = (char **)ft_calloc(((ft_count_sub(s, c)) + 1), sizeof(char *));
	if (new == NULL)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}
