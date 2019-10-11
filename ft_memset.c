/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:10:22 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/01 15:48:56 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*t;

	i = 0;
	if (len == 0)
		return (b);
	t = ((void*)b);
	while (len--)
	{
		t[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
