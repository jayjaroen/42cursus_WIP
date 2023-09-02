/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:50:30 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/02 15:15:55 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else if (c >= 65 && c <= 90)
		return (c);
	else
		return(1);
}

/*int	main(void)
{
	printf("the result of toupper: %c\n",toupper('A'));
	printf("the result of my function: %c\n", ft_toupper('A'));
	printf("the result of toupper: %c\n",toupper('c'));
	printf("the result of my funtion: %c\n", ft_toupper('c'));
	printf("the result of toupper: %c\n", toupper(1));
	printf("the result of my function: %c\n", ft_toupper(1));
}*/
