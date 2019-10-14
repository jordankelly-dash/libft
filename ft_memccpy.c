/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:43:17 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 15:42:19 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*source;
	unsigned char		*dest;

	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == ((unsigned char)c))
		{
			return ((void*)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
