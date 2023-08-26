#include "../libtest.h"

static void t_substr_u(const char *s, unsigned int start, size_t len)
{
    char *result;

    printf("Source: \"%s\", Start: %u, Length: %zu\n", s, start, len);

    result = ft_substr(s, start, len);
    printf("ft_substr: ");
    if (result)
        printf("%s\n", result);
    else
        printf("no result\n");
    free(result);

    printf("\n");
}

void t_substr(void) {
    printf("\n--------------------\ntesting ft_substr:\n");
    t_substr_u("Hello, world!", 7, 5);
    t_substr_u("This is a test.", 2, 7);
    t_substr_u("Substring", 0, 3);
    t_substr_u("Long string", 6, 20);
    t_substr_u("Another string", 8, 5);
    t_substr_u(NULL, 0, 5);
}