/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:31:37 by jkarimov          #+#    #+#             */
/*   Updated: 2024/01/07 20:40:51 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lowercase(unsigned long n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_lowercase(n / 16, count);
		ft_lowercase(n % 16, count);
	}
	else
	{
		c = "0123456789abcdef"[n % 16];
		write(1, &c, 1);
		(*count)++;
	}
}

void	ft_uppercase(unsigned long n, int *count)
{
	char	c;

	if (n >= 16)
	{
		ft_uppercase(n / 16, count);
		ft_uppercase(n % 16, count);
	}
	else
	{
		c = "0123456789ABCDEF"[n % 16];
		write(1, &c, 1);
		(*count)++;
	}
}
