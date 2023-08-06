#include "../libtest.h"

static void t_isalpha_u(int n)
{
    printf("ft_isalpha : %d\n   isaplha : %d\n\n", ft_isalpha(n), isalpha(n));
}

void    t_isalpha(void)
{
    printf("\n--------------------\ntest de ft_isalpha:\n");
    t_isalpha_u(1);
    t_isalpha_u('Z');
    t_isalpha_u(-2147483648);
    t_isalpha_u('a');
    t_isalpha_u('e');
    t_isalpha_u(0);
}