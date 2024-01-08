/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:01:02 by jkarimov          #+#    #+#             */
/*   Updated: 2024/01/08 19:46:49 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_print_unsigned(n / 10, count);
		ft_print_unsigned(n % 10, count);
	}
	else
	{
		ft_putchar(n + '0', count);
	}
}
