/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:40:46 by elduran           #+#    #+#             */
/*   Updated: 2024/10/11 15:40:49 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_uc;
	size_t			i;

	b_uc = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b_uc[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
