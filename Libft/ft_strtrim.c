/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:35:42 by opopov            #+#    #+#             */
/*   Updated: 2024/11/18 16:22:15 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	dcalc(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	checkcheck(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	size_t		len;
	char		*res;

	if (!s1 || !set)
	{
		return (NULL);
	}
	while (*s1 && checkcheck(*s1, set))
	{
		s1++;
	}
	end = s1 + dcalc(s1) - 1;
	while (end > s1 && checkcheck(*end, set))
	{
		end--;
	}
	len = end - s1 + 1;
	res = (char *)malloc(len + 1);
	if (!res)
	{
		return (NULL);
	}
	ft_strlcpy(res, (char *)s1, len + 1);
	return (res);
}
