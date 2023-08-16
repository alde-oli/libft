#include "libtest.h"
//gcc -o mon_programme main.c ./test_libc/t_atoi.c -L/../libft_rendu_pdf2022/libft.a

#include "libtest.h"
#include <stdio.h>
#include <dlfcn.h>

#define TEST_FUNCTION(func_name) \
    do { \
        void *handle = dlopen("../libft_rendu_pdf2022/libft.a", RTLD_NOW | RTLD_GLOBAL); \
        if (!handle) { \
            fprintf(stderr, "Error: Could not load libft.a\n"); \
            return 1; \
        } \
        void *func_ptr = dlsym(handle, "ft_" #func_name); \
        if (!func_ptr) { \
            printf("ft_" #func_name " does not exist\n"); \
        } else { \
            t_ ## func_name(); \
        } \
        dlclose(handle); \
    } while (0)

int main(void)
{
    TEST_FUNCTION(isalpha);
    TEST_FUNCTION(isdigit);
    TEST_FUNCTION(isalnum);
    TEST_FUNCTION(isascii);
    TEST_FUNCTION(isprint);
    TEST_FUNCTION(strlen);
    TEST_FUNCTION(memset);
    TEST_FUNCTION(bzero);
    TEST_FUNCTION(memcpy);
    TEST_FUNCTION(memmove);
    TEST_FUNCTION(strlcpy);
    TEST_FUNCTION(strlcat);
    TEST_FUNCTION(toupper);
    TEST_FUNCTION(tolower);
    TEST_FUNCTION(strchr);
    TEST_FUNCTION(strrchr);
    TEST_FUNCTION(strncmp);
    TEST_FUNCTION(memchr);
    TEST_FUNCTION(memcmp);
    TEST_FUNCTION(strnstr);
    TEST_FUNCTION(atoi);

    return 0;
}