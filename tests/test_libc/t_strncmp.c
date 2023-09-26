#include "../libtest.h"

void    t_strncmp_u(char *s1, char *s2, unsigned int n)
{
    printf("s1 : %s , s2 : %s , lenght : %d\nft_strncmp : %d\n   strncmp : %d\n\n", s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

void    t_strncmp(void)
{
    printf("\n--------------------\ntesting ft_strncmp:\n");
    t_strncmp_u("squalala", "squalala", 8);
    t_strncmp_u("squalala", "squalala", 20);
    t_strncmp_u("squalala", "squalala", 0);
    t_strncmp_u("intermarche", "internet", 8);
    t_strncmp_u("intermarche", "internet", 5);
    t_strncmp_u("wheee", "wheeee", 6);
}