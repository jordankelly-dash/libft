/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkelly- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:23:03 by jkelly-           #+#    #+#             */
/*   Updated: 2019/10/14 19:39:12 by jkelly-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int sign;
	int val;
	int overflow;

	sign = 1;
	overflow = 0;
	val = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = (val * 10) + (*str - '0');
		str++;
		overflow++;
		if (overflow >= 19)
			return ((sign == -1) ? 0 : (-1));
	}
	return (val * sign);
}
