/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_err_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:40:12 by clovella          #+#    #+#             */
/*   Updated: 2022/10/26 05:39:15 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	ft_vec_err_handler(t_vec *vec, void (*handler)(void *), void *context)
{
	vec->on_err = handler;
	vec->on_err_ctx = context;
}
