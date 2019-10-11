/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:55:30 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 11:42:58 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	size_t				x;
	unsigned char		*source;
	unsigned char		*dest;

	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	x = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if (dest > source)
	{
		while (++i <= len)
		{
			dest[len - i] = source[len - i];
		}
	}
	else
		while (x < len)
		{
			dest[x] = source[x];
			x++;
		}
	return (dest);
}
