/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:39:52 by jay               #+#    #+#             */
/*   Updated: 2023/09/30 17:43:09 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node.  The memory of
’next’ must not be freed.
Parameters: lst:  The node to free.
            del:  The address of the function used to delete
            the content.
Return value: NONE
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst -> content);
		free(lst);
	}
}
