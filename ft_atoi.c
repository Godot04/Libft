/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:23:07 by opopov            #+#    #+#             */
/*   Updated: 2024/11/13 15:16:38 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	a;
	int	min;

	res = 0;
	a = 0;
	min = 1;
	if (!nptr)
	{
		return (0);
	}
	while (nptr[a] == ' ' || nptr[a] == '\n'
		|| nptr[a] == '\t' || nptr[a] == '\v'
		|| nptr[a] == '\v' || nptr[a] == '\f'
		|| nptr[a] == '\r')
	{
		a++;
	}
	if (nptr[a] == '-' || nptr[a] == '+')
	{
		if(nptr[a] == '-')
		{
			min *= -1;
		}
		a++;
	}
	while (nptr[a] >= 48 && nptr[a] <= 57)
	{
		res *= 10;
		res += nptr[a] - '0';
		a++;
	}
	return (res * min);
}
