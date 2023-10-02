/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:05:36 by jay               #+#    #+#             */
/*   Updated: 2023/10/02 08:10:08 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: returns the last node of the list.
Parameters : lst: The beginning of the list.
Return value: Last node of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr != NULL && ptr -> next != NULL)
		ptr = ptr -> next;
	return (ptr);
}
