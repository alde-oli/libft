#include "../libtest.h"

void t_strnstr_u(const char *haystack, const char *needle, size_t len)
{
    const char *ft_result = ft_strnstr(haystack, needle, len);
    // const char *result = strnstr(haystack, needle, len);

    printf("  Haystack: \"%s\"\n    Needle: \"%s\"\nMax Length: %zu\nft_strnstr : ", haystack, needle, len);
    if (ft_result)
        printf("%s", ft_result);
    else
        printf("not found");
    // printf("\n   strnstr : ");
    // if (result)
    //     print_memory_address(result);
    // else
    //     printf("not found");
    printf("\n\n");
}

void t_strnstr(void)
{
    printf("\n--------------------\ntesting ft_strnstr:\n(displaying memory address if there is a result)\n");
    printf("\nthe comparison with strnstr was disabled as the function is not avalaible for some systems.\nif strnstr is avalaible for you please uncomment the commented lines in the file \"t_strnstr\"\nand include the library in \"libtest.h\"\n\n");
    t_strnstr_u("May the Force be with you!", "Force", strlen("May the Force be with you!"));
    t_strnstr_u("ab abcd abcdef a", "abcd ", strlen("ab abcd abcdef a"));
    t_strnstr_u("Why so serious?", "serious", strlen("Why so serious?"));
    t_strnstr_u("It's dangerous to go alone! Take this.", "alone", strlen("It's dangerous to go alone! Take this."));
    t_strnstr_u("Hasta la vista, baby.", "vista", strlen("Hasta la vista, baby."));
    t_strnstr_u("Do or do not, there is no try.", "do", 6);
    t_strnstr_u("", "popculture", 0);
    t_strnstr_u("There's no place like home.", "", strlen("There's no place like home."));
    t_strnstr_u("I feel the need... the need for speed.", "speed", strlen("I feel the need... the need for speed."));
    t_strnstr_u("I'm king of the world!", "king", strlen("I'm king of the world!"));
    t_strnstr_u("Hello, this is a test string.", "unicorn", strlen("Hello, this is a test string."));
    t_strnstr_u("Searching for a nonexistent substring.", "notfound", strlen("Searching for a nonexistent substring."));
}