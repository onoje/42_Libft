/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:08:17 by elduran           #+#    #+#             */
/*   Updated: 2024/10/20 18:08:19 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	if (*needle == '\0')
		return ((char *) haystack);
	x = 0;
	while (haystack[x] != '\0' && x < len)
	{
		y = 0;
		while (needle[y] != '\0' && x + y < len)
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break ;
		}
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		x++;
	}
	return (0);
}
