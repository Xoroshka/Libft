/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:06:35 by clovella          #+#    #+#             */
/*   Updated: 2022/02/16 03:10:22 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_absl(long int n)
{
	unsigned long int	abs;

	if (n < 0)
		abs = -n;
	else
		abs = n;
	return (abs);
}
