/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:53:14 by jay               #+#    #+#             */
/*   Updated: 2023/09/30 15:24:08 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Adds the node 'new' at the end of the list
Parameters: lst: the address of a pointer to the first link of a list.
            new: the address of a pointer to the node to be added to the list.
Return: None
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node != NULL)
	{
		while (node -> next != NULL)
			node = node -> next;
		node -> next = new;
	}
	else
		*lst = new;
}
