/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:17:00 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 20:09:12 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stddef.h>

size_t	ft_select_mem_size(size_t current, size_t additional);
void	*ft_phony_realloc(void *data, size_t cur_size, size_t new_size);
#endif