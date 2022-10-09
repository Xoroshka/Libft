/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:34 by clovella          #+#    #+#             */
/*   Updated: 2022/10/08 08:04:05 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

t_res	ft_str_append(t_str *to, t_str from)
{
	return (ft_str_concat(to, (char *)from.data, from.len));
}
