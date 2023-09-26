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

static void t_memset_u(int c, size_t n)
{
    void *s;
    printf("size : %d, set : %d\n", (int)n, c);
    s = malloc(n);
    printf("ft_memset : ");
    ft_putmem(ft_memset(s, c, n), n);
    free(s);
    s = malloc(n);
    printf("   memset : ");
    ft_putmem(memset(s, c, n), n);
    free(s);
    printf("\n");
}

void t_memset(void)
{
    printf("\n--------------------\ntesting ft_memset:\n(if not in the 0 - 255 range, value will be \"c modulo 256\")\n");
    t_memset_u(4567, 3);
    t_memset_u(-300, 1);
    t_memset_u(215, 0);
    t_memset_u(3000, 5);
    t_memset_u(55, 12);
}