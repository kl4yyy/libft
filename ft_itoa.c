/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:46:09 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/13 00:42:16 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <limits.h>

int	count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
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
	long	x;

	x = n;
	len = count_len(x);
	if (x == 0 && len == 1)
		return ("0");
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	while (x > 0)
	{
		str[len--] = x % 10 + '0';
		x /= 10;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(3704));        // "3704"
	printf("%s\n", ft_itoa(-123));        // "-123"
	printf("%s\n", ft_itoa(0));           // "0"
	printf("%s\n", ft_itoa(-2147483648)); // "-2147483648"
}
