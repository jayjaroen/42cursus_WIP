/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:19:44 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/02 15:27:28 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else if (c >= 97 && c <= 122)
		return (c);
	else
		return (1);
}

/*int	main(void)
{
	printf("the result of tolower: %c\n", tolower('C'));
	printf("the result of my function: %c\n", ft_tolower('C'));
	printf("the result of tolower: %c\n", tolower('a'));
	printf("the result of my function: %c\n", tolower('a'));
	printf("the result of tolower: %c\n", tolower('1'));
	printf("the result of my function: %c\n", tolower('1'));
}*/
