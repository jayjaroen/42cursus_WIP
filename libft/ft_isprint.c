/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:40:48 by jjaroens          #+#    #+#             */
/*   Updated: 2023/08/27 13:59:01 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if ((c >= 40 && c <= 47)||(c >= 50 && c <=57)||(c >= 60 && c <= 67)
			||(c >= 70 && c <= 77)||(c >= 100 && c <= 107)||(c >= 110 && c <= 117)
			||(c >= 120 && c <= 127)||(c >= 130 && c <= 137)||(c >= 140 && c <= 147)
			||(c >= 150 && c <= 157)||(c >= 160 && c <= 167)||(c >= 170 && c <= 176))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("the return of isprint: %d\n", isprint('\n'));
	printf("the return of myfunction" "%d\n", ft_isprint('\n'));
	
	printf("the return of isprint: %d\n", isprint('o'));
	printf("the return of myfunction" "%d\n", ft_isprint('o'));
	
	printf("the return of isprint: %d\n", isprint('~'));
	printf("the return of myfunction" "%d\n", ft_isprint('~'));
	
	printf("the return of isprint: %d\n", isprint('5'));
	printf("the return of myfunction" "%d\n", ft_isprint('5'));
	
}*/
