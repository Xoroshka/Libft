/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:09:30 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 07:23:35 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_types.h"
#include "libft_std.h"

/*
mem_ptr - pointer to memory which need to be reallocated
data_size - size of data in mem_ptr memory
new_size - desired sire
*/

void	*ft_memchsize(void *mem_ptr, t_u64 data_size, t_u64 new_size)
{
	void	*new_mem;

	new_mem = malloc(new_size);
	if (new_mem == 0 && new_size != 0)
		return (0);
	ft_memcpy(new_mem, mem_ptr, ft_umin(new_size, data_size));
	free(mem_ptr);
	return (new_mem);
}
