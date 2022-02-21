/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_upcap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:19:40 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:46:38 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "std.h"
#include "str.h"

int	ft_str_upcap(t_str *str, size_t upcap)
{
	char	*new_data;

	new_data = malloc(str->cap + upcap);
	if (!ft_memcpy(new_data, str->data, str->len))
		return (-1);
	free(str->data);
	str->data = new_data;
	str->cap += upcap;
	return (0);
}
