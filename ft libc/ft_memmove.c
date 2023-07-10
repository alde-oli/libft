#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned int    i;
    unsigned char   *temp_dest;
    unsigned char   inter[256];
    unsigned char   *temp_src;

    temp_dest = (unsigned char *)dest;
    temp_src = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        inter[i] = temp_src[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        temp_dest[i] = inter[i];
        i++;
    }
    return (dest);
}