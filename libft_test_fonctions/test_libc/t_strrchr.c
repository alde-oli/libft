#include "../libtest.h"

void t_strrchr_u(const char *s, int c)
{
    if (strrchr(s, c))
    {
        if (isprint(c))
            printf("Source : %s, to search: %c\nft_strrchr : %c , %s\n   strrchr : %c , %s\n\n", s, c, *ft_strrchr(s, c), ft_strrchr(s, c), *strrchr(s, c), strrchr(s, c));
        else
            printf("Source : %s, to search: %d\nft_strrchr : %d , %s\n   strrchr : %d , %s\n\n", s, c, *ft_strrchr(s, c), ft_strrchr(s, c), *strrchr(s, c), strrchr(s, c));
    }
    else
    {
        if (isprint(c))
        {
            if (ft_strrchr(s, c))
                printf("Source : %s, to search: %c\nft_strrchr : %c , %s\n", s, c, *ft_strrchr(s, c), ft_strrchr(s, c));
            else
                printf("Source : %s, to search: %c\nft_strrchr : not found\n", s, c);
            printf("   strrchr : not found\n\n");
        }
        else
        {
            if (ft_strrchr(s, c))
                printf("Source : %s, to search: %d\nft_strrchr : %d , %s\n", s, c, *ft_strrchr(s, c), ft_strrchr(s, c));
            else
                printf("Source : %s, to search: %d\nft_strrchr : not found\n", s, c);
            printf("   strrchr : not found\n\n");
        }
    }
}

void t_strrchr(void)
{
    printf("\n--------------------\ntesting ft_strrchr:\n");
    t_strrchr_u("may the force be with you", 'w');
    t_strrchr_u("aussie aussie aussie, oy oy oy", 0);
    t_strrchr_u("nggyungludngtaely", 'y');
    t_strrchr_u("nggyungludngtaely", 3020);
    t_strrchr_u("", 'a');
}