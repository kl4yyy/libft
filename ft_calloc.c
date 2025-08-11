/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:12:38 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/11 17:07:22 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	fsz;
	void	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	fsz = nmemb * size;
	p = malloc(fsz);
	if (!p)
		return (NULL);
	ft_bzero(p, fsz);
	return (p);
}
