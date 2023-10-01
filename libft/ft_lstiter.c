/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:46:06 by jay               #+#    #+#             */
/*   Updated: 2023/10/01 16:20:35 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
Parameters: lst:  The address of a pointer to a node.
            f:  The address of the function used to iterate on
            the list.
Return: None
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	(*f)(lst -> content);
	ft_lstiter(lst -> next, f);
}
