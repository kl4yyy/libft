/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:50:47 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/06 14:59:14 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size){
    int i;
	int	y;
	int	destlng;

	i = 0;
	destlng = 0;
	while (dst[destlng] != '\0')
	{
		destlng++;
	}
	y = (size - destlng - 1);
	while ((src[i] != '\0' && y))
	{
		dst[destlng] = src[y];
		destlng++;
		y--;
		i++;
	}
	dst[destlng] = '\0';
	return (destlng);
}