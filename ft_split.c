/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:33:51 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/18 21:41:03 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//understand
#include "libft.h"
#include <stdlib.h>

static void	free_words(char **arr, size_t count)
{
	while (count > 0)
	{
		free(arr[count - 1]);
		count--;
	}
	free(arr);
}

static char	*worddup(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (end - start + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	*words(const char *s, size_t *p, char c)
{
	char	*w;
	size_t	start;
	size_t	end;

	if (!s || !p)
		return (NULL);
	while (s[*p] == c)
		(*p)++;
	if (!s[*p])
		return (NULL);
	start = *p;
	while (s[*p] && s[*p] != c)
		(*p)++;
	end = *p;
	w = worddup(s, start, end);
	return (w);
}

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	pos;
	char	**sol;
	size_t	wordi;
	size_t	total_words;

	pos = 0;
	wordi = 0;
	total_words = word_count(s, c);
	sol = malloc((total_words + 1) * sizeof(char *));
	if (!sol)
		return (NULL);
	while (wordi < total_words)
	{
		sol[wordi] = words(s, &pos, c);
		if (sol[wordi] == NULL)
		{
			free_words(sol, wordi);
			return (NULL);
		}
		wordi++;
	}
	sol[wordi] = NULL;
	return (sol);
}

// int main(void)
// {
//     char str[] = "   salam    assddsa   dspihfdgdfsgi  ";
//     char **res = ft_split(str, ' ');

//     for (int i = 0; res[i]; i++)
//         printf("%s\n", res[i]);

//     free(res);
//     return (0);
// }

// "           salam           baybars          klay"

// **str

// [4]

// str = (char **)malloc(4 * sizeof(char **));

// str[0] = "salam"

// str[0] = malloc(6);

// str[1] = "baybars"

// str[1] = malloc(8);

// str[2] = "klay";

// str[2] = malloc(5);

// if (!str[2])
// {
//     while (--i >= 0)
//         free(str[i]);
//     free(str);
//     return (NULL);
// }

// str[3] = NULL;