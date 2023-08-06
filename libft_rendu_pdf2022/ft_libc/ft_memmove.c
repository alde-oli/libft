#include "../libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int    i;
    unsigned char   inter[256];

    i = -1;
    while (i++ < (int)n)
        inter[i] = ((unsigned char *)src)[i];
    i = -1;
    while (i++ < (int)n)
        ((unsigned char *)dest)[i] = inter[i];
    return (dest);
}
