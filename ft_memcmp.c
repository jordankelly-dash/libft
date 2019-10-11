/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:46:23 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 09:28:48 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str;
	unsigned char *thng;

	str = (unsigned char*)s1;
	thng = (unsigned char*)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((*str == *thng) && --n)
	{
		str++;
		thng++;
	}
	return (*str - *thng);
}
