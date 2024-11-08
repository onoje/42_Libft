/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:38:15 by elduran           #+#    #+#             */
/*   Updated: 2024/10/20 11:38:20 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	size_t	len;

	c_char = (char)c;
	len = ft_strlen(s);
	if (c_char == '\0')
	{
		return ((char *)&s[len]);
	}
	while (len > 0)
	{
		if (s[len - 1] == c_char)
		{
			return ((char *)&s[len -1]);
		}
		len--;
	}
	return (0);
}
