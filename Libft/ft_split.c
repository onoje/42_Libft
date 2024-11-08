/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elduran <elduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:00:36 by elduran           #+#    #+#             */
/*   Updated: 2024/11/02 22:01:17 by elduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	amount;

	i = 0;
	amount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			amount++;
		i++;
	}
	return (amount);
}

static void	free_malloc(char **array)
{
	int	i;

	i = 0;
	if (array)
	{
		while (array[i] != NULL)
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}

static char	**split_words(char const *s, char c, char **new_array)
{
	int	i;
	int	word_last_index;

	i = 0;
	while (*s)
	{
		word_last_index = find_word(s, c);
		if (word_last_index)
		{
			new_array[i] = ft_substr(s, 0, word_last_index);
			if (!new_array[i])
			{
				free_malloc(new_array);
				return (NULL);
			}
			s += word_last_index;
			i++;
		}
		else
			s++;
	}
	new_array[i] = NULL;
	return (new_array);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;

	if (!s)
		return (NULL);
	new_array = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!new_array)
		return (NULL);
	return (split_words(s, c, new_array));
}
