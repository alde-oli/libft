#include "libft.h"

void    *ft_memalloc(size_t size)
{
    unsigned char   *s;

    s = malloc(size);
    if (!s)
        return (NULL);
    return (ft_bzero(s, size));
}