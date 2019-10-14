/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:17:03 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 16:03:24 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (s[start] && len)
	{
		sub[i] = s[start];
		start++;
		len--;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
