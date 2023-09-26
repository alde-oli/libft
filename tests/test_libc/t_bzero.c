#include "../libtest.h"

static void ft_putmem(void *s, size_t n)
{
    unsigned char *mem = (unsigned char *)s;
    size_t i = 0;

    while (i < n) {
        printf("%d ", mem[i]);
        i++;
    }

    printf("\n");
}

static void t_calloc_u(size_t n, size_t size)
{
    void *s;
    printf("size: %d, element size: %d\n", (int)n, (int)size);
    s = ft_calloc(n, size);
    printf("ft_calloc: ");
    ft_putmem(s, n * size);
    free(s);
    s = calloc(n, size);
    printf("   calloc: ");
    ft_putmem(s, n * size);
    free(s);

    printf("\n");
}

void t_calloc(void)
{
    printf("\n--------------------\ntesting ft_calloc :\n");
    t_calloc_u(3, sizeof(int));
    t_calloc_u(1, sizeof(double));
    t_calloc_u(0, sizeof(char));
    t_calloc_u(5, sizeof(float));
    t_calloc_u(125, sizeof(short));
    t_calloc_u(0, sizeof(int));
    t_calloc_u(5, sizeof(char));
}