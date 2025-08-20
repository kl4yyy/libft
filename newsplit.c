#include	"libft.h"

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
	int			words;
	char		**str;

	if (!s)
		return (NULL);
	words = countword(s, c);
	str = (char **) malloc (sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	return (split_words(str, s, c, words));
}
/*
#include <stdio.h>

int	main(void)
{
	const char		*mystring;
	char			**result;
	char			delim;
	int				i;

	i = 0;
	mystring = "Hello World This a Is Test";
	delim = ' ';
	result = ft_split(mystring, delim);
	if (result)
	{
		while (result[i])
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
			i++;
		}
		free (result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}*/
