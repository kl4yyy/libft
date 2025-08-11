/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:11:48 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 22:16:36 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*ns;
	size_t	i;
	size_t	j;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	n = l1 + l2;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	ns = (char *)malloc(n + 1);
	if (!ns)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < l2)
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[n] = '\0';
	return (ns);
}

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *new = ft_strjoin(s1, s2);
//     printf("%s\n", new);
//     free(new);
// }
