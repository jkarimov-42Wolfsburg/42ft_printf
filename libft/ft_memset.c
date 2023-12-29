/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:29:39 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/18 20:41:39 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int x, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (n--)
		*ptr++ = (unsigned char)x;
	return (b);
}
