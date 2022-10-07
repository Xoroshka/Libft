/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:25:39 by clovella          #+#    #+#             */
/*   Updated: 2022/10/07 06:32:29 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"
#include "libft_types.h"

void	ft_vec_sort(t_vec vec, int (*compare) (const void *, const void *))
{
	qsort(vec.data, vec.len, vec.elm_size, compare);
}
