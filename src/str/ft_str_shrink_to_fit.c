/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:46:13 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 18:53:01 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"
#include "utils.h"

t_bool	ft_str_shrink_to_fit(t_str *str)
{
	char	*new_data;

	if (str->cap == str->len)
		return (true);
	new_data = ft_phony_realloc(str->data, str->cap, str->len);
	if (new_data)
	{
		str->data = new_data;
		str->cap = str->len;
		return (true);
	}
	return (false);
}
