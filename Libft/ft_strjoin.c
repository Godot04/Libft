/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:17:35 by opopov            #+#    #+#             */
/*   Updated: 2024/11/18 16:15:59 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	fcalc123(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*fcalc1(char const *s2, const char *s1, char *res)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		res[a + b] = s2[b];
		b++;
	}
	res[a + b] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	str1_len;
	size_t	str2_len;

	if (!s1 || !s2)
		return (NULL);
	str1_len = fcalc123(s1);
	str2_len = fcalc123(s2);
	res = (char *)malloc((str1_len + str2_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res = fcalc1(s2, s1, res);
	return (res);
}
