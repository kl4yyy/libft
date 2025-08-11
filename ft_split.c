/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@amman.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:33:51 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/11 21:58:32 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int fun_count_word(char const *s, char c)
{
    int count = 0;

    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    char  **arr;
    int     i;
    if (!s) 
        return NULL;
    arr = malloc((fun_count_word(s, c) + 1) * sizeof(char *));
    if (!arr)
        return NULL;
    return (arr);
}
int main(void)
{
    char str[] = "   salam    assddsa   dspihfdgdfsgi  ";
    char **res = ft_split(str, ' ');

    for (int i = 0; res[i]; i++)
        printf("%s\n", res[i]);

    free(res);
    return 0;
}


// "           salam           baybars          klay"

// **str

// [4]

// str = (char **)malloc(4 * sizeof(char **));

// str[0] = "salam"

// str[0] = malloc(6);

// str[1] = "baybars"

// str[1] = malloc(8);

// str[2] = "klay";

// str[2] = malloc(5);

// if (!str[2])
// {
//     while (--i >= 0)
//         free(str[i]);
//     free(str);
//     return (NULL);       
// }


// str[3] = NULL;