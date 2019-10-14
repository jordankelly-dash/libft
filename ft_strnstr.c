/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:52:49 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/11 15:36:53 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char		*ft_strnstr(const char *hs, const char *n, size_t len)
{
	size_t	i;
	int		j;
	int		savei;

	i = 0;
	if (n[0] == '\0')
		return (hs);
	while (hs[i] && i < len)
	{
		j = 0;
		if (hs[i] == n[j])
		{
			savei = i;
			while (hs[i] == n[j] && n[j] && i < len)
			{
				if (n[j + 1] == '\0')
					return (&hs[savei]);
				i++;
				j++;
			}
			i = savei;
		}
		i++;
	}
	return (0);
}
