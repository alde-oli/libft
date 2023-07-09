#include "libft.h"

void    *ft_bzero(void *s, size_t n)
{
    unsigned int    i;
    unsigned char   *loc;

    loc = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        *(loc + i) = 0;
        i++;
    }
    return (s);
}