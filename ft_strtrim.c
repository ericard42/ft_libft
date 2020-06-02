/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericard <ericard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:56:55 by ericard           #+#    #+#             */
/*   Updated: 2019/11/08 13:05:33 by ericard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_copy(size_t len, char *dest, char const *src)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1]
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	if (!(dest = (char*)malloc(sizeof(*dest) * (len + 1))))
		return (NULL);
	dest = ft_copy(len, dest, &s1[start]);
	dest[len] = '\0';
	return (dest);
}
