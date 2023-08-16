#include "../libtest.h"

void display_array(const char *title, int *arr)
{
    printf("%s: ", title);
    for (size_t i = 0; i < 10; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

void t_memmove_u(size_t src_offset, size_t dest_offset, size_t n)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("source : ");
    for (size_t i = 0; i < 10; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    int original[10];
    memcpy(original, arr, sizeof(original));

    int arr_copy1[10];
    memcpy(arr_copy1, arr, sizeof(arr_copy1));
    ft_memmove(&arr_copy1[dest_offset], &arr_copy1[src_offset], n);
    display_array("ft_memmove", arr_copy1);

    int arr_copy2[10];
    memcpy(arr_copy2, original, sizeof(arr_copy2));
    memmove(&arr_copy2[dest_offset], &arr_copy2[src_offset], n);
    display_array("   memmove", arr_copy2);

    printf("\n");
}


void    t_memmove(void)
{
    printf("\n--------------------\ntesting ft_memmove:\n");   
    t_memmove_u(0, 3, 10);
    t_memmove_u(3, 0, 10);
    t_memmove_u(3, 0, 5);
    t_memmove_u(3, 5, 5);
    t_memmove_u(0, 2, 8);
    t_memmove_u(0, 2, 0);
    t_memmove_u(0, 0, 0);
}
