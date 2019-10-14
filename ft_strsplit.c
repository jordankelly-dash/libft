/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:55:11 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 15:46:07 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	int			k;
	char		**ra;

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
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			ra[i][k++] = s[j++];
		ra[i][k] = '\0';
	}
	ra[i] = 0;
	return (ra);
}
