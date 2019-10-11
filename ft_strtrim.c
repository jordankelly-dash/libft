/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:20:28 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/10 15:13:55 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		len;
	int					i;
	char				*str;

	i = -1;
	len = ft_strlen((char*)s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
	{
		len--;
	}
	if (len == 0)	
		return (ft_strdup(""));
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
	}
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
	{
		str[i] = *s++;
	}
	str[i] = '\0';
	return (str);
}
