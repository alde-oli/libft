#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *news;

    i = 0;
    if (!s || !f)
        return(NULL);
    if (!(news = (char*) malloc(sizeof(char) * ft_strlen(s) + 1)));
        return (NULL);
    while(s[i])
    {
        news[i] = f(i, s[i]);
        i++;
    }
    news[i] = 0;
    return(news);
}