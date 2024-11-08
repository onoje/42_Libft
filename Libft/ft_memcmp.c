/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:40:33 by elduran           #+#    #+#             */
/*   Updated: 2024/10/20 16:40:36 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;
	size_t				x;

	s1_ptr = s1;
	s2_ptr = s2;
	x = 0;
	while (x < n)
	{
		if ((s1_ptr[x] > s2_ptr[x]) || (s1_ptr[x] < s2_ptr[x]))
		{
			return (s1_ptr[x] - s2_ptr[x]);
		}
		x++;
	}
	return (0);
}
