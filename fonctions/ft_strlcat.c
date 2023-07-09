#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t n)
{
    size_t dest_len;
    size_t src_len;
    size_t len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    len = dest_len + src_len;
    if (dest_len >= n)
        return src_len + n;

    ft_strncat(dest + dest_len, src, n - dest_len - 1);
    dest[n - 1] = '\0';

    return (len);
}