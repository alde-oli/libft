#include "../libtest.h"

static void t_strdup_u(const char *src) {
    char *dest1;
    char *dest2;

    printf("Source: \"%s\"\n", src);

    dest1 = ft_strdup(src);
    printf("ft_strdup: %s\n", dest1);
    free(dest1);

    dest2 = strdup(src);
    printf("   strdup: %s\n", dest2);
    free(dest2);

    printf("\n");
}

void t_strdup(void)
{
    printf("\n--------------------\ntesting ft_strdup and strdup:\n");
    t_strdup_u("hello");
    t_strdup_u("world");
    t_strdup_u("");
    t_strdup_u("This is a long string to test memory allocation and duplication.");
    t_strdup_u("1234567890");
    char *large_str = (char *)malloc(sizeof(char) * 100);
    memset(large_str, 'X', 99);
    large_str[99] = '\0';
    t_strdup_u(large_str);
    free(large_str);
}