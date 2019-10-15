/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:39:05 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/14 18:08:47 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	dup = (char*)malloc(sizeof(char) * i + 1);
	if (dup == NULL)
		return (NULL);
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
