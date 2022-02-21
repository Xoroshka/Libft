/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:49:50 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:45:58 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
