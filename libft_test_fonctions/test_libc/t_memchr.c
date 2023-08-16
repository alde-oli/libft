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

void t_memchr_u(const void *s, int c, size_t n, size_t element_size, size_t num_elements)
{
    if (memchr(s, c, n))
    {
        printf("Source : ");
        print_array_source(s, num_elements, element_size);
        printf(", to search: ");
        if (isprint(c))
            printf("%c\nft_memchr : ", c);
        else
            printf("%d\nft_memchr : ");
        print_memory_address(ft_memchr(s, c, n));
        printf("\n   memchr : ");
        print_memory_address(memchr(s, c, n));
        printf("\n\n");
    }
    else
    {
        printf("Source : ");
        print_array_source(s, num_elements, element_size);
        printf(", to search: ");
        if (isprint(c))
            printf("%c\nft_memchr : ", c);
        else
            printf("%d\nft_memchr : ");
        if (ft_memchr(s, c, n))
            print_memory_address(ft_memchr(s, c, n));
        else
            printf("not found");
        printf("\n   memchr : not found\n\n");
    }
}

void t_memchr(void)
{
    printf("\n--------------------\ntesting ft_memchr:\n(displaying memory adress if there is a result)\n");
    t_memchr_u("may the force be with you", 'w', strlen("may the force be with you"), sizeof(char), strlen("may the force be with you"));
    t_memchr_u("aussie aussie aussie, oy oy oy", 0, strlen("aussie aussie aussie, oy oy oy"), sizeof(char), strlen("aussie aussie aussie, oy oy oy"));
    t_memchr_u("nggyungludngtaely", 'y', strlen("nggyungludngtaely"), sizeof(char), strlen("nggyungludngtaely"));
    t_memchr_u("nggyungludngtaely", 3020, strlen("nggyungludngtaely"), sizeof(char), strlen("nggyungludngtaely"));
    t_memchr_u("", 'a', 0, sizeof(char), 0);
    
    char arr1[] = {1, 2, 3, 4, 5};
    t_memchr_u(arr1, 3, sizeof(arr1), sizeof(char), sizeof(arr1) / sizeof(arr1[0]));
    
    int arr2[] = {10, 20, 30, 40, 50};
    t_memchr_u(arr2, 30, sizeof(arr2), sizeof(int), sizeof(arr2) / sizeof(arr2[0]));
    
    char arr3[] = {-1, -2, -3, -4, -5};
    t_memchr_u(arr3, -3, sizeof(arr3), sizeof(char), sizeof(arr3) / sizeof(arr3[0]));
    
    char arr4[] = {0, 1, 2, 3, 4};
    t_memchr_u(arr4, 0, sizeof(arr4), sizeof(char), sizeof(arr4) / sizeof(arr4[0]));
    
    char arr5[] = {1, 2, 3, 4, 5};
    t_memchr_u(arr5, 6, sizeof(arr5), sizeof(char), sizeof(arr5) / sizeof(arr5[0]));
    t_memchr_u(arr5, 1, 0, sizeof(char), sizeof(arr5) / sizeof(arr5[0]));
}