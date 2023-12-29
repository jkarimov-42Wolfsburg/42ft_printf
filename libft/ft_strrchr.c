/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:30 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/23 20:51:47 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	c = (char)c;
	while (1)
	{
		if (*s == c)
		{
			last = s;
		}
		if (*s == '\0')
		{
			break ;
		}
		s++;
	}
	return ((char *)last);
}
