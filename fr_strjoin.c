#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  l1 = ft_strlen(s1);
    size_t  l2 = ft_strlen(s2);
    char *ns;
    size_t n = l1+l2;
    size_t i = 0;
    if(!s1 || !s2) return NULL;
    ns = (char *)malloc(n+1);
    if (!ns)return NULL;
    i = 0;
    while (i < l1)
    {
        ns[i] = s1[i];
        i++;
    }

    size_t j = 0;
    while (j < l2)
    {
        ns[i + j] = s2[j];
        j++;
    }
    ns[n] = '\0';
    return ns;
}

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *joined = ft_strjoin(s1, s2);

//     if (joined == NULL)
//     {
//         printf("ft_strjoin returned NULL\n");
//         return 1;
//     }

//     printf("%s\n", joined);

//     free(joined);
//     return 0;
// }

