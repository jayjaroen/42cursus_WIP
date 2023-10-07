/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:32:48 by jay               #+#    #+#             */
/*   Updated: 2023/10/07 16:36:09 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*
Description: Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument.  Each character is passed by
address to ’f’ to be modified if necessary.
Parameters: 1) the string on which to iterate
			2) the function to apply to each character
return: None
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f (i, (s + i));
		i++;
	}
}
/*int	main(void)
{
	void	(*f)(unsigned int, char*);
	char	s[] = "abcdefgh";
	char	*ptr;
	
	f = my_function;
	ptr = s;
	ft_striteri(ptr,f);
	while (*ptr)
	{
		printf("%c\n",*ptr);
		ptr++;
	}
}*/
