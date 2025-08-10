#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start = 0;
    size_t end;
    size_t i, j;
    char *p;

    if (!s1 || !set)
        return (NULL);

    // find start
    while (s1[start] && strchr(set, s1[start]))
        start++;

    // find end
    end = start;
    while (s1[end])
        end++;
    while (end > start && strchr(set, s1[end - 1]))
        end--;

    // allocate
    p = malloc(end - start + 1);
    if (!p)
        return (NULL);

    // copy
    i = start;
    j = 0;
    while (i < end)
        p[j++] = s1[i++];
    p[j] = '\0';

    return (p);
}

int main(void)
{
    char *s = "helloeo";
    char *set = "el";
    char *p = ft_strtrim(s, set);
    printf("%s\n", p); // ho
    free(p);
}
