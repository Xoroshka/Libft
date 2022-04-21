/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:46:13 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_str.h"
#include "libft_utils.h"

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
