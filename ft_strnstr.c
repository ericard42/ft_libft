/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericard <ericard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:59:43 by ericard           #+#    #+#             */
/*   Updated: 2020/02/05 13:00:19 by ericard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] && j + i < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
