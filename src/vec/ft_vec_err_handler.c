/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_err_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:40:12 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 10:14:52 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

t_res	ft_vec_err_handler(t_vec *vec, void (*handler)(void *), void *context)
{
	if (vec == err)
		return (err);
	vec->err_handl = true;
	vec->on_err = handler;
	vec->on_err_ctx = context;
	return (ok);
}
