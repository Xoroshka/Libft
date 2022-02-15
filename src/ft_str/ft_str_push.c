/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:35 by clovella          #+#    #+#             */
/*   Updated: 2022/02/15 22:30:40 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

int	ft_str_push(t_str *str, char c)
{
	if (ft_str_overcap(str, 1))
		return (-1);
	str->data[str->len] = c;
	return (0);
}
