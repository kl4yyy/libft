/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:54:26 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/06 23:12:30 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//unfinished
#include "libft.h"

char * strnstr(const char *big, const char *little, size_t len)
{
    size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return (big);
	while (big[i] != '\0'&& i+j < len)
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			while ((big[i + j] != '\0') && (big[i + j] == little[j]))
			{
				j++;
			}
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
