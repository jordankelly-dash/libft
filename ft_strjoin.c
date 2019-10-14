/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:12:02 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 16:07:32 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*bigstring;
	int		x;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2 || !s1)
		return (NULL);
	x = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(bigstring = (char*)malloc(sizeof(char) * x + 1)))
		return (NULL);
	while (s1[i])
	{
		bigstring[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		bigstring[i + j] = s2[j];
		j++;
	}
	bigstring[i + j] = '\0';
	return (bigstring);
}
