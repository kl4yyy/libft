/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:47:45 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 22:10:56 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ds;

	ds = ft_strlen(s);
	while (ds > 0)
	{
		if (s[ds] == c)
		{
			return ((char *)(s + ds));
		}
		ds--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "hellmooohmwe";
// 	int c = 'm';
// 	printf("%s\n", ft_strrchr(s, c));
// }