#include "../libtest.h"

static void print_memory_address(const void *ptr)
{
    printf("%p", ptr);
}

static void print_array_source(const void *s, size_t n, size_t element_size)
{
    printf("[");
    for (size_t i = 0; i < n; i++)
    {
        if (element_size == sizeof(char))
        {
            char value = *((char *)s + i);
            if (value >= 32 && value <= 126)
                printf("'%c'", value);
            else
                printf("%d", value);
        }
        else if (element_size == sizeof(int))
        {
            int value = *((int *)s + i);
            if (value >= 32 && value <= 126)
                printf("'%c'", value);
            else
                printf("%d", value);
        }

        if (i < n - 1)
            printf(", ");
    }
    printf("]");
}

void t_memcmp_u(const void *s1, const void *s2, size_t n, size_t element_size)
{
    printf("s1 : ");
    print_array_source(s1, n, element_size);
    printf(" , s2 : ");
    print_array_source(s2, n, element_size);
    printf(" , length : %zu\nft_memcmp : %d\n   memcmp : %d\n\n", n, ft_memcmp(s1, s2, n), memcmp(s1, s2, n));
}

void t_memcmp(void)
{
    printf("\n--------------------\ntesting ft_memcmp:\n(displaying memory address if there is a result)\n");
    
    char str1[] = "squalala";
    char str2[] = "squalala";
    t_memcmp_u(str1, str2, 8, sizeof(char));
    
    t_memcmp_u(str1, str2, 20, sizeof(char));
    
    t_memcmp_u(str1, str2, 0, sizeof(char));
    
    char str3[] = "intermarche";
    char str4[] = "internet";
    t_memcmp_u(str3, str4, 8, sizeof(char));
    
    t_memcmp_u(str3, str4, 5, sizeof(char));
    
    char str5[] = "wheee";
    char str6[] = "wheeee";
    t_memcmp_u(str5, str6, 6, sizeof(char));
}
