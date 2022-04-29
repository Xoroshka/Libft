/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vec.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:15:33 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 04:18:11 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H
# include "libft_types.h"

t_res	ft_vec_err_handler(t_vec *vec, void (*handler)(void *), void *context);
void	*ft_vec_get(t_vec *vec, t_u64 index);
t_vec	ft_vec_new(t_u64 element_size);
void	*ft_vec_pop(t_vec *vec);
t_res	ft_vec_push_vec(t_vec *to, t_vec *from);
t_res	ft_vec_push(t_vec *vec, void *item);
t_res	ft_vec_reserve_exact(t_vec *vec, t_u64 additional);
t_res	ft_vec_reserve(t_vec *vec, t_u64 additional);
#endif