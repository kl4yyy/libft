/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:17:22 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 22:18:36 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dub;

	i = 0;
	i = ft_strlen(s);
	dub = malloc(i + 1);
	if (!dub)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dub[i] = s[i];
		i++;
	}
	dub[i] = '\0';
	return (dub);
}

// int main(void){
//     char *s = "hello";
//     char *fun = ft_strdup(s);
//     printf("%s\n",fun);
//     free(fun);
// }
