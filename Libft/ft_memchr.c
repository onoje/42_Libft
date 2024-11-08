/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:23:42 by elduran           #+#    #+#             */
/*   Updated: 2024/10/20 14:23:46 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;
	unsigned char		c_char;
	size_t				i;

	s_ptr = s;
	c_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == c_char)
		{
			return ((void *)(s_ptr + i));
		}
		i++;
	}
	return (0);
}
