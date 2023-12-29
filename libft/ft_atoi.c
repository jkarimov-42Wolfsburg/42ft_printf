/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:40:47 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/23 21:11:44 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	value;
	int	i;

	sign = 1;
	value = 0;
	i = 0;
	while ((str[i] == ' ') || ((str[i] >= '\t') && (str[i] <= '\r')))
		i++;
	if ((str[i] == '-' ) || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (sign * value);
}
