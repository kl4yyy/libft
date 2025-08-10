/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:20:22 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/07 18:51:52 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)src;
	ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = sc[i];
		i++;
	}
	return (dest);
}

// int main(void){
//     char dest[100];
//     char *h = "hello";
//     int sz = 3;
//     dest[sz] = '\0';
//     printf("%s\n",(char *)ft_memcpy(dest,h,sz));
// }
