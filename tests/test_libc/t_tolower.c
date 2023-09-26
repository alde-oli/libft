#include "../libtest.h"

void t_tolower_u(int c)
{
    if(isprint(c))
        printf("test : %c\nft_tolower: %c\n   tolower : %c\n\n", c, ft_tolower(c), tolower(c));
    else
        printf("test : %d\nft_tolower : %d\n   tolower : %d\n\n", c, ft_tolower(c), tolower(c));
}

void    t_tolower(void)
{
    printf("\n--------------------\ntesting ft_tolower:\n");
    t_tolower_u(1);
    t_tolower_u(-2147483648);
    t_tolower_u('0');
    t_tolower_u('9');
    t_tolower_u('A');
    t_tolower_u('Z');
    t_tolower_u('a');
    t_tolower_u('z');
    t_tolower_u(0);
    t_tolower_u(-20);
    t_tolower_u(800);
}