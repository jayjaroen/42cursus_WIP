/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 23:14:11 by jay               #+#    #+#             */
/*   Updated: 2023/09/16 13:54:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
//parameters: 1) s = the string to be split; 2) c = the delimiter character
//return value = the array oof new strings resulting from the split
// 1. need to know the number of substring in C
// 2. allocate the memory for the array, only a pointer
// 3. calculate the memory for the substring strlen
// 4. allocate the memory for the substring, an index of a pointer to another pointer?i
// 5. use the strlcpy to copy the substring into the string
// 6. handle the last substring
int	sub_string(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		substring;
	char	*string;
	char	*current;
	int		index;

	if (!*s || !c)
		return (NULL);
	substring = sub_string(s, c) + 1;
	new = (char **)malloc(sizeof(char*) * substring);
	if (new == NULL)
		return NULL;
	index = 0;
	string = (char *)s;
	current = (char *)string;
	while (*current != '\0')
	{
		if (*current == c)
		{
			new[index] = (char *)malloc(sizeof(char)* ft_strlen(current) + 1);
			if (new[index] == NULL)
				return (NULL);
			ft_strlcpy(new[index], string, current - string );
			new[index][current - string] = '\0';
			string = current + 1;
			index++;
		}
		current++;
	}
	new[index] = (char *)malloc(sizeof(char)* ft_strlen(current) + 1);
	if (new[index] == NULL)
		return (NULL);
	ft_strlcpy(new[index], string, current - string);
	new[index][current - string] = '\0';
	return (new);
}
/*int	main(void)
{
	char	*word = "Hello ! World ! Babaaa ! baa";
	char	c = '!';
	char	**result;
	int		i;

	result = ft_split(word, c);
	for ( i = 0; result[i] != NULL; i++)
	{
		printf("%s\n", result[i]);
	}
	return (0);
}*/
