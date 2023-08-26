#include "../libtest.h"

static char    test_function(unsigned int index, char c)
{
    if (islower(c)) {
        return toupper(c); // Convert to uppercase
    } else {
        return tolower(c); // Convert to lowercase
    }
}

static void t_strmapi_u(const char *s) {
    printf("Source: \"%s\"\n", s);

    char *result = ft_strmapi(s, &test_function);
    printf("ft_strmapi: ");
    if (result)
        printf("%s\n", result);
    else
        printf("no result");
    free(result);

    printf("\n");
}

void t_strmapi(void) {
    printf("\n--------------------\ntesting ft_strmapi:\n");

    // Test cases with different inputs
    t_strmapi_u("Hello");
    t_strmapi_u("Goodbye");
    t_strmapi_u("");
    t_strmapi_u("12345");
    t_strmapi_u("Testing 123");

    // Add more test cases here

    // Edge case: NULL source
    t_strmapi_u(NULL);
}

int main()
{
    t_strmapi();
}