/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericard <ericard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:59:29 by ericard           #+#    #+#             */
/*   Updated: 2020/02/05 12:05:47 by ericard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if (src < dest)
			dest2[n - 1 - i] = src2[n - 1 - i];
		else
			dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
