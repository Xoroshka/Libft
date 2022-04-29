/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:34 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 10:10:13 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

t_bool	ft_str_push_str(t_str *to, t_str from)
{
	return (ft_str_push_cstr(to, (char *)from.data, from.len));
}
