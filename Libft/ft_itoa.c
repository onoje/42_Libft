/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:09:20 by elduran           #+#    #+#             */
/*   Updated: 2024/10/28 13:09:27 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_length(int n)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		n = -n;
		length = 1;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*ft_str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = (find_length(n) - 1);
	ft_str = (char *)malloc((length + 2) * (sizeof(char)));
	if (ft_str == 0)
		return (0);
	if (n < 0)
	{
		ft_str[0] = '-';
		n = -n;
	}
	ft_str[length + 1] = '\0';
	if (n == 0)
		ft_str[length] = + '0';
	while (n > 0)
	{
		ft_str[length] = (n % 10) + '0';
		n = n / 10;
		length--;
	}
	return (ft_str);
}
