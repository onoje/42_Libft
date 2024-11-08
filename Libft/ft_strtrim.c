/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:06:04 by elduran           #+#    #+#             */
/*   Updated: 2024/10/23 18:06:06 by elduran          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	const char	*first;
	const char	*last;
	char		*s1_new;

	i = 0;
	first = s1;
	while (first[i] != '\0' && ft_strchr(set, first[i]))
		i++;
	first = first + i;
	j = ft_strlen(s1) - 1;
	last = s1 + j;
	while (last >= first && ft_strchr(set, *last))
		last--;
	s1_new = (char *)malloc((last - first + 2) * sizeof(char));
	if (s1_new == 0)
		return (0);
	ft_strlcpy(s1_new, first, last - first + 2);
	return (s1_new);
}
