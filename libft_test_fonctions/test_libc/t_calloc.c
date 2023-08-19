#include "../libtest.h"

static void ft_putmem(void *s, size_t n)
{
    unsigned char *mem = (unsigned char *)s;
    size_t i = 0;
    
    while (i < n)
    {
        printf("%d ", mem[i]);
        i++;
    }
    
    printf("\n");
}

static void t_bzero_u(size_t n)
{
    void *s;
    printf("size : %d\n", (int)n);
    s = malloc(n);
    printf("ft_bzero : ");
    ft_putmem(ft_calloc(s, n), n);
    free(s);
    s = malloc(n);
    printf("   bzero : ");
    ft_putmem(memset(s, 0, n), n);
    free(s);
    printf("\n");
}

void t_bzero(void)
{
    printf("\n--------------------\ntesting ft_bzero:\n");
    t_bzero_u(3);
    t_bzero_u(1);
    t_bzero_u(0);
    t_bzero_u(5);
    t_bzero_u(125);
}