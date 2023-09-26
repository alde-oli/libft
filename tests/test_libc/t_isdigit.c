#include "../libtest.h"

static void t_isdigit_u(int n)
{
    if(isprint(n))
        printf("test : %c\nft_isdigit : %d\n   isdigit : %d\n\n", n, ft_isdigit(n), isdigit(n));
    else
        printf("test : %d\nft_isdigit : %d\n   isdigit : %d\n\n", n, ft_isdigit(n), isdigit(n));
}

void    t_isdigit(void)
{
    printf("\n--------------------\ntesting ft_isdigit:\n");
    t_isdigit_u(1);
    t_isdigit_u('0');
    t_isdigit_u('9');
    t_isdigit_u('A');
    t_isdigit_u('Z');
    t_isdigit_u('a');
    t_isdigit_u('z');
    t_isdigit_u(0);
    t_isdigit_u(-4567);
    t_isdigit_u(2147483647);
}