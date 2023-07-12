#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int    i;

    i = -1;
    while (i++ < (int)n)
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    return (dest);
}