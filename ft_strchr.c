/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:41:14 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/18 19:41:00 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check the casting
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
// int	main(void)
// {
// 	char *s = "hellmooohmwe";
// 	int c = 109;
// 	printf("%s\n", strchr(s, c));
// }