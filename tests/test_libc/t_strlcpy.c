#include "../libtest.h"

void    t_strlcpy_u(char *src, size_t size)
{
    char    *dest1;
    //char    *dest2;
    int     return1;
    //int     return2;

    printf("Source : \"%s\" size : %d\n", src, size);
    dest1 = (char *) malloc(sizeof(char) * (size + 1));
    //dest2 = (char *) malloc(sizeof(char) * (size + 1));
    if(!(dest1/* && dest2*/))
        return;
    return1 = ft_strlcpy(dest1, src, size);
    printf("ft_strlcpy : %s\nreturn : %d\n", dest1, return1);
    //return2 = strlcpy(dest2, src, size);
    //printf("   strlcpy : %s\nreturn : %d\n", dest2, return2);
    free(dest1);
    //free(dest2);
    printf("\n");
}

void    t_strlcpy(void)
{
    printf("\n--------------------\ntesting ft_strlcpy:\n");
    printf("\nthe comparison with strlcpy was disabled as the function is not avalaible for some systems.\nif strlcpy is avalaible for you please uncomment the commented lines in the file \"t_strlcpy\"\nand include the library in \"libtest.h\"\n\n");
    t_strlcpy_u("honk honk", 20);
    t_strlcpy_u("honk honk", 2);
    t_strlcpy_u("", 10);
    t_strlcpy_u("squalala", 0);
}