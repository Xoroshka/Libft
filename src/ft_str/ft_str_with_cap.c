/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_with_cap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:55 by clovella          #+#    #+#             */
/*   Updated: 2022/02/15 19:46:02 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_str.h"

t_str	ft_str_with_cap(size_t cap)
{
	t_str	str;

	str.data = malloc(cap);
	str.cap = cap;
	str.len = 0;
	return (str);
}
