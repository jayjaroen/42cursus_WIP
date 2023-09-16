/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:19:44 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 18:14:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
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
