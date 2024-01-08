/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:03:03 by jkarimov          #+#    #+#             */
/*   Updated: 2024/01/07 20:42:13 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(unsigned long n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_print_pointer(n / 16, count);
		ft_print_pointer(n % 16, count);
	}
	else
	{
		c = "0123456789abcdef"[n % 16];
		(*count) += write (1, &c, 1);
	}
}

void	ft_pointer(unsigned long n, int *count)
{
	(*count) += write (1, "0x", 2);
	ft_print_pointer(n, count);
}
