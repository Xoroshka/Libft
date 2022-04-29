/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:35 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 10:10:17 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

t_res	ft_str_push(t_str *str, char c)
{
	if (ft_vec_reserve(str, 1))
	{
		str->data[str->len] = c;
		str->len++;
		return (ok);
	}
	return (err);
}
