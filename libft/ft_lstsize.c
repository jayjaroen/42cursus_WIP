/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:33:57 by jay               #+#    #+#             */
/*   Updated: 2023/09/29 22:44:53 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description: Counts the number of nodes in a list.
Parameters: lst: The begining of the list.
Return value: the length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	ptr = lst;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr -> next;
	}
	return (i);
}
