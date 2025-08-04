/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:15:04 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/04 19:20:18 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char    *pointer;
    size_t  index;

    index = 0;
    pointer = (char *)s;
    while (index < n)
    {
        pointer[index] = c;
        index++;
    }
    return (pointer);
}
