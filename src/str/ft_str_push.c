/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:35 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 19:30:58 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_bool	ft_str_push(t_str *str, char c)
{
	if (ft_str_reserve(str, 1))
	{
		str->data[str->len] = c;
		return (true);
	}
	return (false);
}
