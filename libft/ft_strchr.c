/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:40:46 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/02 15:55:08 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char *str;
	char	word;

}

int	main(void)
{
	char word[] = "Hello world";
	char target = 'w';
	char *result;

	result = strchr(word,target);
	printf("%c\n", *result);
}
