#include "../libtest.h"

static void t_split_u(const char *s, char c) {
    char **result;

    printf("Source: \"%s\", Separator: '%c'\n", s, c);

    result = ft_split(s, c);
    printf("ft_split:\n");
    if (result)
    {
        for (int i = 0; result[i]; i++)
            printf("%s\n", result[i]);
        for (int i = 0; result[i]; i++)
            free(result[i]);
        free(result);
    }
    else
        printf("no result\n");
    printf("\n");
}

void t_split(void) {
    printf("\n--------------------\ntesting ft_split:\n");
    t_split_u("Hello,world!", ',');
    t_split_u("This is a test.", ' ');
    t_split_u("Empty source", ' ');
    t_split_u("", ',');
    t_split_u("One,Two,,Three,", ',');
    t_split_u("a|b|c|d|e", '|');
    t_split_u("Word1,Word2,Word3,Word4", ',');
    t_split_u("   Leading spaces", ' ');
    t_split_u("Trailing spaces   ", ' ');
    t_split_u("  Multiple   spaces   ", ' ');
    t_split_u("123|456||789", '|');
    t_split_u("Some|long|words|with|different|lengths", '|');

    // Edge cases
    t_split_u(NULL, ','); // Source string is NULL
    t_split_u("No|separators|here", ' '); // No separators in the string
    t_split_u("|||||", '|'); // Only separators in the string
    t_split_u("OnlyOneWord", ' '); // Only one word in the string

    // Add more test cases as needed
}