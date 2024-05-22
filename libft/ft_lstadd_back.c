/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:50:11 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/24 17:50:25 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nd;

	nd = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (nd->next != NULL)
		{
			nd = nd->next;
		}
		nd->next = new;
	}
}

/* Adds the node ’new’ at the end of the list. */