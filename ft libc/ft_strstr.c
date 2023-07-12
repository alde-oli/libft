#include "libft.h"

char *ft_strstr(char *h, char *n)
{
    int i;
    i = 0;
    while (h[i])
    {
        if (!(ft_strncmp(h + i, n, ft_strlen(n))))
            return (h + i);
        i++;
    }
    return (NULL);
}