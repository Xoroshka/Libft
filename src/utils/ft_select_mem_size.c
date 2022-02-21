/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_mem_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:17:28 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 17:17:32 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_select_mem_size(size_t current, size_t additional)
{
	size_t	new_size;

	new_size = current + additional;
	new_size += (new_size >> 2) + (new_size >> 3);
	new_size &= ~0xF;
	new_size += 16;
	return (new_size);
}
