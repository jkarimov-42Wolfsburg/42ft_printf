/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:16:11 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/17 18:37:20 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		s1len;
	size_t		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, s1len + 1);
	ft_strlcpy(s3 + s1len, s2, s2len + 1);
	return (s3);
}
