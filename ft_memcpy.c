/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:30:32 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 11:40:53 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char 			*d;
	const char		*s;
	size_t 			i;

	i = -1;
	d = dst;
	s = (char*)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (++i < n)
	{	
		*(d + i) = *(s + i);
	}
	return (dst);
}
