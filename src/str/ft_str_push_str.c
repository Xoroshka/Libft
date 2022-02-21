/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:34 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 19:30:45 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_bool	ft_str_push_str(t_str *to, t_str from)
{
	return (ft_str_push_cstr(to, from.data, from.len));
}
