/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:44:39 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 16:09:55 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*func;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen((char*)s);
	if (!(func = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		func[i] = f(s[i]);
		i++;
	}
	func[i] = '\0';
	return (func);
}
