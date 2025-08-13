/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:11:48 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/12 22:16:27 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*ns;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	ns = (char *)malloc(l1 + l2 + 1);
	if (!ns)
		return (NULL);
	while (i < l1)
	{
		ns[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		ns[i] = s2[i - l1];
		i++;
	}
	ns[i] = '\0';
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
