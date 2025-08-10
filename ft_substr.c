/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:13:50 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 22:13:51 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sln;
	char	*sub;

	if (!s)
		return (NULL);
	sln = ft_strlen(s);
	if (start >= sln)
		return (ft_strdup(""));
	if (len > sln - start)
		len = sln - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	sln = 0;
	while (sln < len)
	{
		sub[sln] = s[start + sln];
		sln++;
	}
	sub[sln] = '\0';
	return (sub);
}
// int main(void)
// {
//     size_t len = 10;
//     char *s = "hello";
//     int start = 2;
//     char *fun = ft_substr(s,start,len);
//     printf("%s\n",fun);
//     free(fun);
// }
