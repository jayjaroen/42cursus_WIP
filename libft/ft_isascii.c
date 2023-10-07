/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:09:38 by jjaroens          #+#    #+#             */
/*   Updated: 2023/10/07 16:33:29 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("the result of isacii %d\n",isascii('A'));
	printf("the result of my function %d\n", ft_isascii('A'));
	printf("the result of isacii %d\n",isascii(1000));
	printf("the result of my function %d\n", ft_isascii(1000));		
}*/
