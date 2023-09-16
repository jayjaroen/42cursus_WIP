/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:38:51 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 16:09:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of isalnum: %d\n",isalnum('0'));
	printf("the result of my function: %d\n",ft_isalnum('0'));
	printf("the result of isalnum: %d\n",isalnum('9'));
	printf("the result of my function: %d\n",ft_isalnum('9'));
	printf("the result of isalnum: %d\n",isalnum('A'));
	printf("the result of my function: %d\n",ft_isalnum('A'));
	printf("the result of isalnum: %d\n",isalnum('c'));
	printf("the result of my function: %d\n",ft_isalnum('c'));
	printf("the result of isalnum: %d\n",isalnum('*'));
	printf("the result of my function: %d\n",ft_isalnum('*'));
}*/
