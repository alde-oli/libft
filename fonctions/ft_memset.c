#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned int    i;
    unsigned char   *loc;

    loc = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        *(loc + i) = (unsigned char)c;
        i++;
    }
    return (s);
}