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

static void t_memcpy_u(void *src, size_t n)
{
    void *d1;
    void *d2;
    printf("source : ");
    ft_putmem(src, n);
    d1 = malloc(n);
    d2 = malloc(n);
    d1 = ft_memcpy(d1, src, n);
    printf("ft_memcpy : ");
    ft_putmem(d1, n);
    d2 = memcpy(d2, src, n);
    printf("   memcpy : ");
    ft_putmem(d2, n);
    free(d1);
    free(d2);
    printf("\n");
}

void t_memcpy(void)
{
    printf("\n--------------------\ntesting ft_memcpy:\n");
    int s1;
    t_memcpy_u((void *)&s1, 1);
    int s2;
    t_memcpy_u((void *)&s1, 4);
    int s3;
    t_memcpy_u((void *)&s1, 12);
    int s4;
    t_memcpy_u((void *)&s1, 0);
    int s5;
    t_memcpy_u((void *)&s1, 78);
} 