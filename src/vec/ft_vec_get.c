/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:01:17 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 04:21:44 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	*ft_vec_get(t_vec *vec, t_u64 index)
{
	if (index >= vec->len)
		return ((void *)err);
	return (vec->data + index * vec->elm_size);
}
