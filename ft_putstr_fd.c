/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:54:16 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 18:09:40 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    if (!s)return;
    
    int i = 0;
    while(s[i])
    {
        write(fd,&s[i],1);
        i++;
    }
}
// int main(void){
//     int fd = 1;
//     char *s = "hello";
//     ft_putstr_fd(s,fd);
// }