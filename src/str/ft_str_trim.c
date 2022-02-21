/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:46:13 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:46:38 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"
#include "std.h"

int	ft_str_trim(t_str *str)
{
	char	*new_data;

	if (str->cap == str->len)
		return (0);
	new_data = malloc(str->len);
	if (!ft_memcpy(new_data, str->data, str->len))
		return (-1);
	free(str->data);
	str->data = new_data;
	str->cap = str->len;
	return (0);
}
