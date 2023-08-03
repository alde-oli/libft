#include "../libft.h"

int ft_nbrlen(int n)
{
    int len;

    len = 1;
    if (n < 0)
        len = 2;
    while (n / 10 != 0)
    {
        len += 1;
        n /= 10;
    }
    return (len);
}