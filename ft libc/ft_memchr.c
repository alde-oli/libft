#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = -1;
    while (i++ < (int)n)
    {
        if (((unsigned char *)s)[i] == c)
            return ((unsigned char *)s + i);
    }
    return (NULL);
}