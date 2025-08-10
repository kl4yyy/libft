/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:04:18 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/07 21:28:53 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s;
	unsigned const char	*ss;

	s = s1;
	ss = s2;
	while (n--)
	{
		if (*s != *ss)
			return (*s - *ss);
		s++;
		ss++;
	}
	return (0);
}
// int main(void){
//     char * i = "hello";
//     char * j = "hr";
//     printf("%d\n",memcmp(i,j,3));
// }