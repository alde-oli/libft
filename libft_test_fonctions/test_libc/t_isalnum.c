#include "../libtest.h"

static void t_isalnum_u(int n)
{
    if(isprint(n))
        printf("test : %c\nft_isalnum : %d\n   isalnum : %d\n\n", n, ft_isalnum(n), isalnum(n));
    else
        printf("test : %d\nft_isalnum : %d\n   isalnum : %d\n\n", n, ft_isalnum(n), isalnum(n));
}

void    t_isalnum(void)
{
    printf("\n--------------------\ntesting ft_isalnum:\n");
    t_isalnum_u(1);
    t_isalnum_u('8');
    t_isalnum_u('a');
    t_isalnum_u(0);
    t_isalnum_u('G');
    t_isalnum_u(2147483647);
}