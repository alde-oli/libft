#include "../libtest.h"

static void test_function(unsigned int index, char *c)
{
    if (islower(*c)) {
        *c = toupper(*c);
    } else {
        *c = tolower(*c);
    }
} 

static void t_striteri_u(char *s)
{
    printf("Original String: \"%s\"\n", s);

    ft_striteri(s, &test_function);

    printf("Modified String: \"%s\"\n\n", s);
}

void t_striteri(void)
{
    printf("\n--------------------\ntesting ft_striteri:\n");
    char str1[] = "Hello";
    char str2[] = "Goodbye";
    char str3[] = "";
    char str4[] = "12345";
    t_striteri_u(str1);
    t_striteri_u(str2);
    t_striteri_u(str3);
    t_striteri_u(str4);
    t_striteri_u(NULL);
}

int main()
{
    t_striteri();
}