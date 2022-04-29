/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:20 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 13:39:26 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H
# include <stddef.h>
# include "libft_types.h"

t_bool	ft_str_append(t_str *to, t_str from);
t_bool	ft_str_concat(t_str *str, char *cstr, size_t size);
t_str	ft_str_new(void);
t_res	ft_str_push(t_str *str, char c);
char	*ft_str2cstr(t_str str);
#endif