/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:28 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 08:38:46 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

t_vec	ft_vec_new(t_u64 element_size)
{
	t_vec	vec;

	vec.elm_size = element_size;
	vec.cap = 0;
	vec.len = 0;
	vec.data = 0;
	vec.err_handl = false;
	return (vec);
}
