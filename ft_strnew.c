/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:15:38 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/10 18:58:28 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *rtrn;

	if (!(rtrn = (char*)malloc(sizeof(char) * size + 1)))
	{
		return (NULL);
	}
	rtrn[size] = '\0';
	while (size-- > 0)
	{
		rtrn[size] = '\0';
	}
	return (rtrn);
}
