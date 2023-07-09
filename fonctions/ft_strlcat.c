#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    int dest_len;
    int src_len;
    int new_len;
    int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (src_len < n)
        new_len = dest_len + src_len;
    else
        new_len = dest_len + n;
    ft_strncat(dest, src, n);
    return ((size_t)(dest_len + src_len + 1));
}