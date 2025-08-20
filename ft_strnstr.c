/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:54:26 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/18 21:40:54 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check conditions
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (*little == '\0')
		return ((char *)big);
	n = ft_strlen(little);
	i = 0;
	while (big[i] && i + n <= len)
	{
		if (ft_strncmp(big + i, little, n) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
