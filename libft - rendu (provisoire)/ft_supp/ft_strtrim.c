#include "../libft.h"

static int  ft_isset(char c, char *set)
{
    while(*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char    *ft_strtrim(char const *s, char const *set)
{
    char    *temp_s;
    char    *dest;
    int     len;

    temp_s = (char *)s;
    while (ft_isset(*temp_s, (char *)set))
        temp_s++;
    len = ft_strlen(temp_s);
    while (ft_isset(temp_s[len - 1], (char *)set))
        len--;
    dest = (char *) malloc(sizeof(char) * (len + 1));
    ft_strlcpy(dest, temp_s, len);
    dest[len] = 0;
    return(dest);
}