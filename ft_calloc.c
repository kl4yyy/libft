//check for overflow maybe?
void *calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0||size == 0) return malloc(1);
    size_t fsz = nmemb * size;
    void *p = malloc(fsz);
    if (!p) return NULL;

    ft_bezero(p, fsz);
    return (p);
}
