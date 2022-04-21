/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_types_vec.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 07:53:40 by clovella          #+#    #+#             */
/*   Updated: 2022/04/22 00:03:48 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPES_VEC_H
# define LIBFT_TYPES_VEC_H
# include "libft_types_base.h"

/*
###Signed Vectors
*/
typedef t_i8	t_i8x2 __attribute__((vector_size(2 * sizeof(t_i8))));
typedef t_i8	t_i8x4 __attribute__((vector_size(4 * sizeof(t_i8))));
typedef t_i8	t_i8x8 __attribute__((vector_size(8 * sizeof(t_i8))));
typedef t_i8	t_i8x16 __attribute__((vector_size(16 * sizeof(t_i8))));
typedef t_i8	t_i8x32 __attribute__((vector_size(32 * sizeof(t_i8))));

typedef t_i16	t_i16x2 __attribute__((vector_size(2 * sizeof(t_i16))));
typedef t_i16	t_i16x4 __attribute__((vector_size(4 * sizeof(t_i16))));
typedef t_i16	t_i16x8 __attribute__((vector_size(8 * sizeof(t_i16))));
typedef t_i16	t_i16x16 __attribute__((vector_size(16 * sizeof(t_i16))));

typedef t_i32	t_i32x2 __attribute__((vector_size(2 * sizeof(t_i32))));
typedef t_i32	t_i32x4 __attribute__((vector_size(4 * sizeof(t_i32))));
typedef t_i32	t_i32x8 __attribute__((vector_size(8 * sizeof(t_i32))));

typedef t_i64	t_i64x2 __attribute__((vector_size(2 * sizeof(t_i64))));
typedef t_i64	t_i64x4 __attribute__((vector_size(4 * sizeof(t_i64))));

typedef t_i128	t_i128x2 __attribute__((vector_size(2 * sizeof(t_i128))));

/*
###Unsigned Vectors
*/
typedef t_u8	t_u8x2 __attribute__((vector_size(2 * sizeof(t_u8))));
typedef t_u8	t_u8x4 __attribute__((vector_size(4 * sizeof(t_u8))));
typedef t_u8	t_u8x8 __attribute__((vector_size(8 * sizeof(t_u8))));
typedef t_u8	t_u8x16 __attribute__((vector_size(16 * sizeof(t_u8))));
typedef t_u8	t_u8x32 __attribute__((vector_size(32 * sizeof(t_u8))));

typedef t_u16	t_u16x2 __attribute__((vector_size(2 * sizeof(t_u16))));
typedef t_u16	t_u16x4 __attribute__((vector_size(4 * sizeof(t_u16))));
typedef t_u16	t_u16x8 __attribute__((vector_size(8 * sizeof(t_u16))));
typedef t_u16	t_u16x16 __attribute__((vector_size(16 * sizeof(t_u16))));

typedef t_u32	t_u32x2 __attribute__((vector_size(2 * sizeof(t_u32))));
typedef t_u32	t_u32x4 __attribute__((vector_size(4 * sizeof(t_u32))));
typedef t_u32	t_u32x8 __attribute__((vector_size(8 * sizeof(t_u32))));

typedef t_u64	t_u64x2 __attribute__((vector_size(2 * sizeof(t_u64))));
typedef t_u64	t_u64x4 __attribute__((vector_size(4 * sizeof(t_u64))));

typedef t_u128	t_u128x2 __attribute__((vector_size(2 * sizeof(t_u128))));

/*
###Floating Vectors
*/
typedef t_f32	t_f32x2 __attribute__((vector_size(2 * sizeof(t_f32))));
typedef t_f32	t_f32x4 __attribute__((vector_size(4 * sizeof(t_f32))));
typedef t_f32	t_f32x8 __attribute__((vector_size(8 * sizeof(t_f32))));

typedef t_f64	t_f64x2 __attribute__((vector_size(2 * sizeof(t_f64))));
typedef t_f64	t_f64x4 __attribute__((vector_size(4 * sizeof(t_f64))));

typedef t_f128	t_f128x2 __attribute__((vector_size(2 * sizeof(t_f128))));

#endif