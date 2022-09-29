/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vec.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:15:33 by clovella          #+#    #+#             */
/*   Updated: 2022/07/13 02:54:03 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H
# include "libft_types.h"

t_res	ft_vec_append(t_vec *to, const t_vec *from);
void	*ft_vec_elm(t_vec *vec, t_u64 index);
t_res	ft_vec_err_handler(t_vec *vec, void (*handler)(void *), void *context);
t_res	ft_vec_insert(t_vec *vec, t_u64 index, const void *item);
t_vec	ft_vec_new(t_u64 element_size);
void	*ft_vec_pop(t_vec *vec);
t_res	ft_vec_push(t_vec *vec, const void *item);
t_res	ft_vec_remove(t_vec *vec, t_u64 index);
t_res	ft_vec_reserve_exact(t_vec *vec, t_u64 additional);
t_res	ft_vec_reserve(t_vec *vec, t_u64 additional);
t_res	ft_vec_resize(t_vec *vec, t_u64 size, const void *placeholder);
void	ft_vec_retain(t_vec *vec, t_bool (*f)(void *));
t_res	ft_vec_shrink_to_fit(t_vec *vec);
#endif