/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:48:45 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:45:58 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elm;

	if (!lst)
		return ;
	while (*lst)
	{
		elm = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(elm, del);
	}
}
