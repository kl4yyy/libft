/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:13:04 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/18 19:43:41 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check the logic
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*p;
	size_t	i;
	size_t	j;

	start = 0;
	if (!s1 || !set)
	return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	p = malloc(end - start + 1);
	if (!p)
		return (NULL);
	i = start;
	j = 0;
	while (i < end)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*set;
// 	char	*p;

// 	s = "helloeo";
// 	set = "el";
// 	p = ft_strtrim(s, set);
// 	printf("%s\n", p); // ho
// 	free(p);
// }
