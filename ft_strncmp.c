/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:36:51 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/18 19:45:25 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//check the codition
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*z;
// 	char	*i;
// 	int		m;

// 	z = "hello";
// 	i = "hello";
// 	m = 4;
// 	printf("%d\n", ft_strncmp(z, i, m));
// }
