/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:40:48 by jjaroens          #+#    #+#             */
/*   Updated: 2023/09/16 16:16:36 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
