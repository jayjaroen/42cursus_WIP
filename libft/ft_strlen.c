/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:15:23 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/08 17:07:21 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// If not handling null, the function still works
size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	printf("the result of strlen function: %zu\n", strlen(""));
// 	printf("the result of my function: %zu\n", ft_strlen(""));
// }
