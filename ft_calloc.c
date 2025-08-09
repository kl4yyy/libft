void *calloc(size_t nmemb, size_t size)
{
    size_t fsz = nmemb * size + 1;
    void *p = malloc(fsz);
    if (!p) return NULL;

    ft_bezero(p, fsz);
    return (p);
}
