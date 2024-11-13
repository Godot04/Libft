/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:04:07 by opopov            #+#    #+#             */
/*   Updated: 2024/11/12 13:34:51 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	b;

	dst_len = 0;
	src_len = 0;
	while(dst[dst_len] != '\0')
	{
		dst_len++;
	}
	while(src[src_len] != '\0')
	{
		src_len++;
	}
	if(size == 0)
	{
		return (src_len + dst_len);
	}
	if(dst_len >= size)
	{
		return (src_len + size);
	}
	b = 0;
	while(b < (size - dst_len - 1) && src[b])
	{
		dst[dst_len + b] = src[b];
		b++;
	}
	dst[dst_len + b] = '\0';
	return (src_len + dst_len);
}
