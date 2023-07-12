#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *news;

    i = 0;
    if (!s || !f)
        return(NULL);
    if (!(news = (char*) malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while(s[i])
    {
        news[i] = f(s[i]);
        i++;
    }
    news[i] = 0;
    return(news);
}