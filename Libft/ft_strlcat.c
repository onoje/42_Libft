/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:49:17 by elduran           #+#    #+#             */
/*   Updated: 2024/10/16 16:49:21 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] && x < dstsize)
	{
		x++;
	}
	if (dstsize <= x)
	{
		return (x + ft_strlen(src));
	}
	while (y < dstsize - x - 1 && src[y] != '\0')
	{
		dst[x + y] = src[y];
		y++;
	}
	dst[x + y] = '\0';
	return (x + ft_strlen(src));
}
