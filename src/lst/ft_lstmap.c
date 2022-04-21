/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:50:36 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*cur;

	if (!lst || !f)
		return (ft_lstnew(0));
	new_lst = ft_lstnew(f(lst->content));
	cur = new_lst;
	lst = lst->next;
	while (lst)
	{
		if (!cur)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		cur->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		cur = cur->next;
	}
	return (new_lst);
}
