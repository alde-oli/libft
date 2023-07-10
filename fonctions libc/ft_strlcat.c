#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t dest_len;
    size_t src_len;
    size_t len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen((char *)src);
    len = dest_len + src_len;
    if (dest_len >= n)
        return (src_len + n);

    ft_strncat(dest + dest_len, (char *)src, n - dest_len - 1);
    dest[n - 1] = '\0';

    return (len);
}