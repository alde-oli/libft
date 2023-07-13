#include "../libft.h"

void    ft_strclr(char  *s)
{
    int l;

    l = ft_strlen(s);
    while (l > 0)
    {
        s[l - 1] = 0;
        l--;
    }
}