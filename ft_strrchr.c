/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:42:14 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/14 16:10:37 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen((char*)s);
	if ((char)c == '\0')
		return ((char*)s + len);
	while (len--)
		if (*(s + len) == c)
			return ((char *)(s + len));
	return (NULL);
}
