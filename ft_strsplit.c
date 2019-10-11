/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:55:11 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 10:45:32 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	ft_cntlt(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	return (i);
}

/*char		**ft_strsplit(char const *s, char c)
{
	char		**ra;
	int			j;
	int			x;
	int			z;

	j = 0;
	x = 0;
	if (!(s) || !(ra = (char**)malloc(sizeof(*ra) * (ft_countwords(s, c + 1)))))
		return (NULL);
	while (j < ft_countwords(s, c))
	{
		while (s[x] == c && s[x])
			x++;
		if (s[x] != c && s[x])
		{
			if (!(ra[j] = (char*)malloc(sizeof(char) * (ft_cntlt(s, c) + 1))))
				return (NULL);
			z = 0;
			while (s[x] != c && s[x])
				ra[j][z++] = s[x++];
			ra[j++][z] = '\0';
		}
	}
	ra[j] = NULL;
	return (ra);
}*/

char 	**ft_strsplit(char const *s, char c)
{	
	int 		i;
	int			j;
	int 		k;
	char 	**ra;

	if (!s || !(ra = (char**)malloc(sizeof(char*) *
			(ft_countwords(s, c) + 1))))
			return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		if (!(ra[i] = ft_strnew(ft_cntlt(&s[j], c) + 1)))
			ra[i] = (NULL);
		while (s[j] ==c)
			j++;
		while (s[j] != c && s[j])
			ra[i][k++] = s[j++];
		ra[i][k] = '\0';
	}
	ra[i] = 0;
	return (ra);
}
