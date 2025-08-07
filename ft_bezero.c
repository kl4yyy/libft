/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:13:04 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/07 15:28:36 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    size_t idx = 0;

    while (idx < n)
    {
        ptr[idx] = 0;
        idx++;
    }
    
}
