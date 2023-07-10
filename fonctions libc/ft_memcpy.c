#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int    i;
    unsigned char   *temp_dest;
    unsigned char   *temp_src;

    temp_dest = (unsigned char *)dest;
    temp_src = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        temp_dest[i] = temp_src[i];
        i++;
    }
    return (dest);
}