/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:13:29 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/23 21:35:13 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
	{
		start = 0;
		len = 0;
	}
	if ((s_len - start) < len)
		len = s_len - start;
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
