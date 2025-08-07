/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:15:04 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/07 15:10:39 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		ptr[idx] = (unsigned char)c;
		idx++;
	}
	return (s);
}
