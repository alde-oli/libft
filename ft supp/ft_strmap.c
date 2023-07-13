#include "../libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *new_s;

    i = 0;
    if (!s || !f)
        return(NULL);
    if (!(new_s = (char*) malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
        return (NULL);
    while(s[i])
    {
        new_s[i] = f(s[i]);
        i++;
    }
    new_s[i] = 0;
    return(new_s);
}