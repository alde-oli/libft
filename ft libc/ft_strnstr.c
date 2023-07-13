#include "../libft.h"

char *ft_strnstr(char *h, char *n, size_t len)
{
    int i;
    i = 0;
    while (h[i] && i < (int)len)
    {
        if (!(ft_strncmp(h + i, n, ft_strlen(n))))
            return (h + i);
        i++;
    }
    return (NULL);
}