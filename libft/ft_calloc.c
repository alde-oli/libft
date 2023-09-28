#include "libft.h"

void *ft_calloc(size_t len, size_t size)
{
    void    *s;

    s = malloc(size * len);
    if(!s)
        return(NULL);
    ft_bzero(s, len * size);
    return(s);
}