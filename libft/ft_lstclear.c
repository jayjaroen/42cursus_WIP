/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:11:04 by jay               #+#    #+#             */
/*   Updated: 2023/09/30 22:00:15 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL
Parameters: lst:  The address of a pointer to a node.
del:  The address of the function used to delete
the content of the node.
Return: None.
step: 1) save current node; 2) free node;
3) set current to next node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst && !del)
		return ;
	current = *lst;
	next_node = NULL;
	while (current != NULL)
	{
		next_node = current -> next;
		del(current -> content);
		free(current);
		current = next_node;
	}
	*lst = NULL;
}
