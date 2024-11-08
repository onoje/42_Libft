/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:09:51 by elduran           #+#    #+#             */
/*   Updated: 2024/10/20 11:10:00 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	c_char;

	c_char = (char)c;
	while (*s != '\0')
	{
		if (*s == c_char)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c_char == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
