#include "../libtest.h"

static void  t_atoi_u(char *str)
{
    printf("test : %s\nft_atoi : %d\n   atoi : %d\n\n", str, ft_atoi(str), atoi(str));
}

void    t_atoi(void)
{
    printf("\n--------------------\ntesting ft_atoi:\n");
    t_atoi_u("2147483647");
    t_atoi_u("1");
    t_atoi_u("fyivty");
    t_atoi_u("0");
    t_atoi_u("\n\t\v\r-34568d789");
    t_atoi_u("-1");
    t_atoi_u("-2147483648");
}