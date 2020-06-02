/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ericard <ericard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:57:31 by ericard           #+#    #+#             */
/*   Updated: 2019/11/08 15:27:11 by ericard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_scpy(char *dest, char const *src, int j, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

static int	nbr_chaines(char const *s, char c)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			nb++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	char	**dest;
	int		size;

	j = 0;
	i = 0;
	size = nbr_chaines(s, c);
	if (!(dest = (char**)malloc(sizeof(char*) * (size + 1))))
		return (0);
	while (i < size)
	{
		while (s[j] == c)
			j++;
		n = 0;
		while (s[j + n] && s[j + n] != c)
			n++;
		if (!(dest[i] = (char*)malloc(sizeof(char) * (n + 1))))
			return (0);
		ft_scpy(dest[i++], s, j, n);
		j += n;
	}
	dest[i] = 0;
	return (dest);
}
