/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:48:45 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 04:49:00 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
