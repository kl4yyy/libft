/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:46:09 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/15 02:29:48 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	long	x;
	int		len;
	char	*str;

	x = n;
	len = count_len(x);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (x == 0)
		str[0] = '0';
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	len--;
	while (x > 0)
	{
		str[len--] = (x % 10) + '0';
		x /= 10;
	}
	return (str);
}
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(3704));        // "3704"
// 	printf("%s\n", ft_itoa(-123));        // "-123"
// 	printf("%s\n", ft_itoa(0));           // "0"
// 	printf("%s\n", ft_itoa(-2147483648)); // "-2147483648"
// }