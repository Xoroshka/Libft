/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_elm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:01:17 by clovella          #+#    #+#             */
/*   Updated: 2022/10/07 06:23:46 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	*ft_vec_elm(t_vec vec, t_u64 index)
{
	if (index >= vec.len)
		return ((void *)err);
	return (vec.data + index * vec.elm_size);
}
