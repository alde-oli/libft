#include "../libtest.h"

void    t_strchr_u(const char *s, int c)
{
    if(strchr(s, c))
    {
        if(isprint(c))
            printf("Source : %s, to search: %c\nft_strchr : %c , %s\n   strchr : %c , %s\n\n", s, c, *ft_strchr(s, c), ft_strchr(s, c), *strchr(s, c), strchr(s, c));
        else
            printf("Source : %s, to search: %d\nft_strchr : %d , %s\n   strchr : %d , %s\n\n", s, c, *ft_strchr(s, c), ft_strchr(s, c), *strchr(s, c), strchr(s, c));
    }
    else
    {
        if(isprint(c))
        {
            if(ft_strchr(s, c))
                printf("Source : %s, to search: %c\nft_strchr : %c , %s\n", s, c, *ft_strchr(s, c), ft_strchr(s, c));
            else
                printf("Source : %s, to search: %c\nft_strchr : not found\n", s, c);
            printf("   strchr : not found\n\n");
        }
        else
        {
            if(ft_strchr(s, c))
                printf("Source : %s, to search: %d\nft_strchr : %d , %s\n", s, c, *ft_strchr(s, c), ft_strchr(s, c));
            else
                printf("Source : %s, to search: %d\nft_strchr : not found\n", s, c);
            printf("   strchr : not found\n\n");
        }
    }
}

void    t_strchr(void)
{
    printf("\n--------------------\ntesting ft_strchr:\n");
    t_strchr_u("may the force be with you", 'w');
    t_strchr_u("aussie aussie aussie, oy oy oy", 0);
    t_strchr_u("nggyungludngtaely", 'y');
    t_strchr_u("nggyungludngtaely", 3020);
    t_strchr_u("", 'a');
}