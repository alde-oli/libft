#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    int     i;
    int     j;

    if(!s1 || !s2)
        return(NULL);
    i = 0;
    j = 0;
    dest = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
    if(!dest)
        return(NULL);
    while(s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        dest[i + j] = s2[j];
        j++;
    }
    dest[i + j] = 0;
    return(dest);
}