/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:16:20 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/02 19:58:24 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char		*thang;
	int				i;

	i = 0;
	thang = str;
	while (thang[i] != c)
	{
		if (thang[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char*)&thang[i]);
}
