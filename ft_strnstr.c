/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:30:10 by opopov            #+#    #+#             */
/*   Updated: 2024/11/13 13:56:34 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	a;
// 	size_t	b;

// 	a = 0;
// 	b = 0;
// 	if(little[a] == '\0')
// 	{
// 		return (big);
// 	}
// 	while(big[a] != '\0' && a < len)
// 	{
// 		b = 0;
// 		while(big[a + b] == little[b] && (a + b) < len)
// 		{
// 			if(little[b] == '\0')
// 			{
// 				return (&big[a]);
// 			}
// 			b++;
// 		}
// 		a++;
// 	}
// 	return (NULL);
// }
