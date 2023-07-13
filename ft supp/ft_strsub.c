# include "../libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char            *dest;

    i = 0;
    dest = (char *) malloc(sizeof(char) * len + 1);
    if (!dest)
        return(NULL);
    while (i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}