/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:09:44 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/06 15:46:43 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size){
    int dlen=0;
    while(dst[dlen] != '\0'){
        dlen++;
    }
    int i = 0;
    while(size > 0){
        dst[dlen]=src[i];
        i++;
        size--;
        dlen++;
    }
    int j = 0;
    while(dst[j] != '\0'){
        j++;
    }
    return(j);
}
int main(void){
    char dst[20]="alo";
    char src[20] = "yaali";
    int size = 3;
    printf("%zu\n",ft_strlcat(dst,src,size));
}