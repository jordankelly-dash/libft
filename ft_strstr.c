/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:10:37 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/16 11:20:39 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int savei;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			savei = i;
			while (haystack[i] == needle[j] && needle[j])
			{
				if (needle[j + 1] == '\0')
					return (&haystack[savei]);
				i++;
				j++;
			}
			i = savei;
		}
		i++;
	}
	return (0);
}
