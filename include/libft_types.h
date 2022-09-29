/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:49 by clovella          #+#    #+#             */
/*   Updated: 2022/07/13 02:52:00 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_H
# define LIBFT_TYPES_H
# include "libft_types_base.h"
# include "libft_types_vec.h"

typedef enum e_bool
{
	false,
	true
}	t_bool;

typedef enum e_res
{
	err,
	ok
}	t_res;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_vec
{
	t_u8	*data;
	t_u64	elm_size;
	t_u64	len;
	t_u64	cap;
	void	(*on_err)(void *);
	void	*on_err_ctx;
}	t_vec;

typedef t_vec	t_str;
#endif