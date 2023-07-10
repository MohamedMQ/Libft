/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:08:59 by mmaqbour          #+#    #+#             */
/*   Updated: 2022/11/05 13:58:11 by mmaqbour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*current;

	if (!lst || !del)
		return ;
	if (lst)
	{
		current = (*lst);
		while (current)
		{
			tmp = current;
			current = current->next;
			ft_lstdelone(tmp, del);
		}
	}
	*lst = NULL;
}
