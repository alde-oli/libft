#include "../libtest.h"

static void t_strjoin_u(const char *s1, const char *s2) {
    char *result;

    printf("Source 1: \"%s\", Source 2: \"%s\"\n", s1, s2);

    result = ft_strjoin(s1, s2);
    printf("ft_strjoin: ");
    if (result)
        printf("%s\n", result);
    else
        printf("no result");
    free(result);

    printf("\n");
}

void t_strjoin(void) {
    printf("\n--------------------\ntesting ft_strjoin:\n");
    t_strjoin_u("Hello, ", "world!");
    t_strjoin_u("This is a ", "test.");
    t_strjoin_u("", "Empty source");
    t_strjoin_u("Prefix", "");
    // Add more test cases

    // Edge case: Both source strings are NULL
    t_strjoin_u(NULL, NULL);
}