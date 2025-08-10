/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:46:09 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/10 20:00:21 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <limits.h>

int	count_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = 0;
	if (n == 0)
        return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
    str[len] = '\0';
	len--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

// int main()
// {
//     int n = -213;

//     printf("%s\n", ft_itoa(n));
// }
