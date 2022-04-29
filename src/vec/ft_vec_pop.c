/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:57:24 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 12:42:14 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	*ft_vec_pop(t_vec *vec)
{
	if (vec->len == 0)
		return ((void *)err);
	vec->len--;
	return (vec->data + (vec->len - 1) * vec->elm_size);
}
