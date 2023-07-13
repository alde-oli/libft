#include "../libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int    i;

    i = -1;
    while (i++ < (int)n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        if (((unsigned char *)src)[i] == (unsigned char)c)
            return ((void*)(dest + i + 1));
    }
    return (NULL);
}