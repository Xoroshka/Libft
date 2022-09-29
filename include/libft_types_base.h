/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types_base.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 07:45:53 by clovella          #+#    #+#             */
/*   Updated: 2022/07/13 02:48:23 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_BASE_H
# define LIBFT_TYPES_BASE_H

/*
###Signed Types
*/
typedef char				t_i8;
typedef short int			t_i16;
typedef int					t_i32;
typedef long int			t_i64;
typedef __int128_t			t_i128;
/*
###Unsigned Types
*/
typedef unsigned char		t_u8;
typedef unsigned short int	t_u16;
typedef unsigned int		t_u32;
typedef unsigned long int	t_u64;
typedef __uint128_t			t_u128;
/*
###Floating Types
*/
typedef float				t_f32;
typedef double				t_f64;
typedef long double			t_f128;

#endif