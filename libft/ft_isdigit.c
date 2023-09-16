/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:36:35 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 16:09:44 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of the isdigit function: %d\n", isdigit('0'));
	printf("the result of my function: %d\n", ft_isdigit('0'));
	printf("the result of the isdigit function: %d\n", isdigit('9'));
	printf("the result of my function: %d\n", ft_isdigit('9'));
	printf("the result of the isdigit function: %d\n", isdigit('e'));
	printf("the result of my function: %d\n", ft_isdigit('e')); 
}*/
