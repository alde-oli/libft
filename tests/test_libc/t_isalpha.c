#include "../libtest.h"

static void t_isalpha_u(int n)
{
    if(isprint(n))
        printf("test : %c\nft_isalpha : %d\n   isaplha : %d\n\n", n, ft_isalpha(n), isalpha(n));
    else
        printf("test : %d\nft_isalpha : %d\n   isaplha : %d\n\n", n, ft_isalpha(n), isalpha(n));
}

void    t_isalpha(void)
{
    printf("\n--------------------\ntesting ft_isalpha:\n");
    t_isalpha_u(1);
    t_isalpha_u('0');
    t_isalpha_u('9');
    t_isalpha_u('A');
    t_isalpha_u('Z');
    t_isalpha_u('a');
    t_isalpha_u('z');
    t_isalpha_u(-2147483648);
    t_isalpha_u(0);
}