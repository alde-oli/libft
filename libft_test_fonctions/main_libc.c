#include "libtest.h"

extern int is_ft_isalpha_available(void);
extern void check_and_run_isalpha(void);

extern int is_ft_isdigit_available(void);
extern void check_and_run_isdigit(void);

extern int is_ft_isalnum_available(void);
extern void check_and_run_isalnum(void);

extern int is_ft_isascii_available(void);
extern void check_and_run_isascii(void);

extern int is_ft_isprint_available(void);
extern void check_and_run_isprint(void);

extern int is_ft_strlen_available(void);
extern void check_and_run_strlen(void);

extern int is_ft_memset_available(void);
extern void check_and_run_memset(void);

extern int is_ft_bzero_available(void);
extern void check_and_run_bzero(void);

extern int is_ft_memcpy_available(void);
extern void check_and_run_memcpy(void);

extern int is_ft_memmove_available(void);
extern void check_and_run_memmove(void);

extern int is_ft_strlcpy_available(void);
extern void check_and_run_strlcpy(void);

extern int is_ft_strlcat_available(void);
extern void check_and_run_strlcat(void);

extern int is_ft_toupper_available(void);
extern void check_and_run_toupper(void);

extern int is_ft_tolower_available(void);
extern void check_and_run_tolower(void);

extern int is_ft_strchr_available(void);
extern void check_and_run_strchr(void);

extern int is_ft_strrchr_available(void);
extern void check_and_run_strrchr(void);

extern int is_ft_strncmp_available(void);
extern void check_and_run_strncmp(void);

extern int is_ft_memchr_available(void);
extern void check_and_run_memchr(void);

extern int is_ft_memcmp_available(void);
extern void check_and_run_memcmp(void);

extern int is_ft_strnstr_available(void);
extern void check_and_run_strnstr(void);

extern int is_ft_atoi_available(void);
extern void check_and_run_atoi(void);

int main(void) {
    check_and_run_isalpha();
    check_and_run_isdigit();
    check_and_run_isalnum();
    check_and_run_isascii();
    check_and_run_isprint();
    check_and_run_strlen();
    check_and_run_memset();
    check_and_run_bzero();
    check_and_run_memcpy();
    check_and_run_memmove();
    check_and_run_strlcpy();
    check_and_run_strlcat();
    check_and_run_toupper();
    check_and_run_tolower();
    check_and_run_strchr();
    check_and_run_strrchr();
    check_and_run_strncmp();
    check_and_run_memchr();
    check_and_run_memcmp();
    check_and_run_strnstr();
    check_and_run_atoi();

    return 0;
}
