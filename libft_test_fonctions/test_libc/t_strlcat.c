#include "../libtest.h"

void t_strlcat_u(char *dest, const char *src, size_t size)
{
    char *destcpy;
    size_t return1;
    //size_t return2;

    destcpy = (char *) malloc(sizeof(char) * (strlen(dest) + 1 + size));
    if(!destcpy)
        return;
    printf("Source : \"%s\" dest : \"%s\" size : %zu\n", src, dest, size);
    strcpy(destcpy, dest);
    return1 = ft_strlcat(destcpy, src, size);
    printf("ft_strlcat : %s\nreturn : %zu\n", destcpy, return1);
    //strcpy(dest, destcpy);
    //return2 = strlcat(dest, src, size);
    //printf("   strlcat : %s\nreturn : %zu\n", dest, return2);
    free(destcpy);
}

void    t_strlcat(void)
{
    printf("\n--------------------\ntesting ft_strlcat:\n");
    printf("\nthe comparison with strlcat was disabled as the function is not avalaible for some systems.\nif strlcat is avalaible for you please uncomment the commented lines in the file \"t_strlcat\"\nand include the library in \"libtest.h\"\n\n");
    t_strlcat_u("squalala", " oui", 15);
    t_strlcat_u("squalala", " oui", 8);
    t_strlcat_u("squalala", " oui", 0);
    t_strlcat_u("", " oui", 15);
    t_strlcat_u("squalala", "", 15);
}