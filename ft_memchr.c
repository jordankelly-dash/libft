/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:14:52 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/01 16:39:13 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	unsigned char	si;
	int				i;

	t = ((unsigned char*)s);
	si = ((unsigned char)c);
	i = 0;
	while (n--)
	{
		if (t[i] == si)
		{
			return (t + i);
		}
		i++;
	}
	return (NULL);
}
