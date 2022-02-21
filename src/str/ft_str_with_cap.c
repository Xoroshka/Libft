/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_with_cap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:55 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:46:29 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"

t_str	ft_str_with_cap(size_t cap)
{
	t_str	str;

	str.data = malloc(cap);
	if (str.data != 0)
		str.cap = cap;
	else
		str.cap = 0;
	str.len = 0;
	return (str);
}
