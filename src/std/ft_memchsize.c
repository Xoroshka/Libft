/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:09:30 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 13:30:55 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_types.h"
#include "libft_std.h"

void	*ft_memchsize(void *data, t_u64 cur_size, t_u64 new_size)
{
	void	*new_data;

	new_data = malloc(new_size);
	if (ft_fmemcpy(new_data, data, ft_umin(cur_size, new_size)))
		free(data);
	return (new_data);
}
