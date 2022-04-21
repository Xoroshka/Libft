/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phony_realloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:09:30 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

void	*ft_phony_realloc(void *data, size_t cur_size, size_t new_size)
{
	void	*new_data;

	new_data = malloc(new_size);
	if (new_data)
	{
		if (data)
		{
			if (cur_size < new_size)
				ft_memcpy(new_data, data, cur_size);
			else
				ft_memcpy(new_data, data, new_size);
			free(data);
		}
		return (new_data);
	}
	return (0);
}
