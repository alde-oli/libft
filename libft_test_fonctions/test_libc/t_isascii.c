#include "../libtest.h"

static void t_isascii_u(int n)
{
    if(isprint(n))
        printf("test : %c\nft_isascii : %d\n   isascii : %d\n\n", n, ft_isascii(n), isascii(n));
    else
        printf("test : %d\nft_isascii : %d\n   isascii : %d\n\n", n, ft_isascii(n), isascii(n));
}

void    t_isascii(void)
{
    printf("\n--------------------\ntesting ft_isascii:\n");
    t_isascii_u(1);
    t_isascii_u('8');
    t_isascii_u('a');
    t_isascii_u(0);
    t_isascii_u(222);
    t_isascii_u(2147483647);
}