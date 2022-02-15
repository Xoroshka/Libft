/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:34 by clovella          #+#    #+#             */
/*   Updated: 2022/02/15 20:55:22 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

int	ft_str_join(t_str *to, t_str from)
{
	return (ft_str_append(to, from.data, from.len));
}
