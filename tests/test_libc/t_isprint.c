#include "../libtest.h"

static void t_isprint_u(int n)
{
    if(isprint(n))
        printf("test : %c\nft_isprint : %d\n   isprint : %d\n\n", n, ft_isprint(n), isprint(n));
    else
        printf("test : %d\nft_isprint : %d\n   isprint : %d\n\n", n, ft_isprint(n), isprint(n));
}

void    t_isprint(void)
{
    printf("\n--------------------\ntesting ft_isprint:\n");
    t_isprint_u(1);
    t_isprint_u('8');
    t_isprint_u('\n');
    t_isprint_u(0);
    t_isprint_u(31);
    t_isprint_u(32);
    t_isprint_u(126);
    t_isprint_u(127);
}