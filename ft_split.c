/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:33:51 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/21 22:47:55 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(const char *s, char c)
{
	int	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			word++;
			while (*s && *s != c)
				s++;
		}
		if (*s)
			s++;
	}
	return (word);
}

static void	free_str_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**split_words(char **str, const char *s, char c, int size)
{
	int			i;
	const char	*temp;
	const char	*start;

	temp = s;
	i = 0;
	while (i < size)
	{
		while (*temp == c)
			temp++;
		start = temp;
		while (*temp && *temp != c)
			temp++;
		str[i] = ft_substr(start, 0, temp - start);
		if (!str[i])
		{
			free_str_array(str);
			return (NULL);
		}
		i++;
	}
	str[size] = (NULL);
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**str;

	if (!s)
		return (NULL);
	words = countword(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	return (split_words(str, s, c, words));
}
