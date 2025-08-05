/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:41:14 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/05 17:47:27 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c){
    int i = 0;
        while(s != "/0"){
            if(*s == c) return((char*)s);
            s++;
        }
    return(NULL);
}
int main(void){
    char *s = "hellmooohwe";
    int c = 109;
    printf("%s\n",strchr(s,c));
}