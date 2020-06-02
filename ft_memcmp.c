/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericard <ericard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:59:24 by ericard           #+#    #+#             */
/*   Updated: 2020/02/05 12:08:49 by ericard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned char			*ptr1;
	unsigned char			*ptr2;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i + 1 < n && ptr1[i] == ptr2[i])
		i++;
	return ((int)(ptr1[i] - ptr2[i]));
}
