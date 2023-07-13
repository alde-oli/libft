#include "../libft.h"

char    *ft_strtrim(char const *s)
{
    char    *temp_s;
    char    *dest;
    int     len;

    temp_s = (char *)s;
    while (*temp_s == ' ' || *temp_s == ',' || *temp_s == '\n' || *temp_s == '\t')
        temp_s++;
    len = ft_strlen(temp_s);
    while (temp_s[len - 1] == ' ' || temp_s[len - 1] == ',' || temp_s[len - 1] == '\n' || temp_s[len - 1] == '\t')
        len--;
    dest = (char *) malloc(sizeof(char) * (len + 1));
    dest = ft_strncpy(dest, temp_s, len);
    dest[len] = 0;
    return(dest);
}