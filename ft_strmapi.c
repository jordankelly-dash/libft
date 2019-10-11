/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:05:29 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/10 20:24:10 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*func;
	int		len;
	int		i;

	len = ft_strlen((char*)s);
	i = 0;
	if (!(func = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		func[i] = f(i, (char)s[i]);
		i++;
	}
	func[i] = '\0';
	return (func);
}
