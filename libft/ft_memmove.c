/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:30:35 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/23 20:17:55 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void	*str1, const void *str2, size_t n)
{
	unsigned int	i;

	if (!str1 && !str2)
		return (NULL);
	i = 0;
	if ((char *)str1 > (char *)str2 && (char *)str1 < (char *)str2 + n)
	{
		i = n;
		while (i > 0)
		{
			((char *)str1)[i - 1] = ((char *)str2)[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			++i;
		}
	}
	return (str1);
}
