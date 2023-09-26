#include "../libtest.h"

void t_toupper_u(int c)
{
    if(isprint(c))
        printf("test : %c\nft_toupper : %c\n   toupper : %c\n\n", c, ft_toupper(c), toupper(c));
    else
        printf("test : %d\nft_toupper : %d\n   toupper : %d\n\n", c, ft_toupper(c), toupper(c));
}

void    t_toupper(void)
{
    printf("\n--------------------\ntesting ft_toupper:\n");
    t_toupper_u(1);
    t_toupper_u(-2147483648);
    t_toupper_u('0');
    t_toupper_u('9');
    t_toupper_u('A');
    t_toupper_u('Z');
    t_toupper_u('a');
    t_toupper_u('z');
    t_toupper_u(0);
    t_toupper_u(-20);
    t_toupper_u(800);
}