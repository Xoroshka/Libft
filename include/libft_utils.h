/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:17:00 by clovella          #+#    #+#             */
/*   Updated: 2022/04/22 00:02:33 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UTILS_H
# define LIBFT_UTILS_H
# include <stddef.h>

size_t	ft_select_mem_size(size_t current, size_t additional);
void	*ft_phony_realloc(void *data, size_t cur_size, size_t new_size);
#endif