/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:22:52 by opopov            #+#    #+#             */
/*   Updated: 2024/11/13 13:13:37 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	// size_t	a;
	// const unsigned char	*str;

	// a = 0;
	// str = (unsigned char *)s;
	// while(a < n)
	// {
	// 	if(str[a] == (unsigned char) c)
	// 	{
	// 		return ((void *)&str[a]);
	// 	}
	// 	a++;
	// }
	// return (NULL);

	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}
