/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:09:03 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/03 11:47:35 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strequ(char const *s1, char const *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (1);
	}
	else
		return (0);
}