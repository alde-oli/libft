#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int    i;
    unsigned char   *temp_dest;
    unsigned char   *temp_src;

    temp_dest = (unsigned char *)dest;
    temp_src = (unsigned char *)src;
    i = 0;
    while (i < n && temp_dest[i] != c)
    {
        temp_dest[i] = temp_src[i];
        i++;
    }
    if (temp_dest[i] != c)
        return (NULL);
    else
        return (dest + i + 1);
}