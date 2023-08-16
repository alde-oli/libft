#include <stdio.h>
#include "libtest.h"

int is_ft_isalpha_available(void) {
    return (ft_isalpha != NULL);
}

void check_and_run_isalpha(void) {
    if (is_ft_isalpha_available()) {
        t_isalpha();
    } else {
        printf("ft_isalpha does not exist\n");
    }
}

int is_ft_isdigit_available(void) {
    return (ft_isdigit != NULL);
}

void check_and_run_isdigit(void) {
    if (is_ft_isdigit_available()) {
        t_isdigit();
    } else {
        printf("ft_isdigit does not exist\n");
    }
}

int is_ft_isalnum_available(void) {
    return (ft_isalnum != NULL);
}

void check_and_run_isalnum(void) {
    if (is_ft_isalnum_available()) {
        t_isalnum();
    } else {
        printf("ft_isalnum does not exist\n");
    }
}

int is_ft_isascii_available(void) {
    return (ft_isascii != NULL);
}

void check_and_run_isascii(void) {
    if (is_ft_isascii_available()) {
        t_isascii();
    } else {
        printf("ft_isascii does not exist\n");
    }
}

int is_ft_isprint_available(void) {
    return (ft_isprint != NULL);
}

void check_and_run_isprint(void) {
    if (is_ft_isprint_available()) {
        t_isprint();
    } else {
        printf("ft_isprint does not exist\n");
    }
}

int is_ft_strlen_available(void) {
    return (ft_strlen != NULL);
}

void check_and_run_strlen(void) {
    if (is_ft_strlen_available()) {
        t_strlen();
    } else {
        printf("ft_strlen does not exist\n");
    }
}

int is_ft_memset_available(void) {
    return (ft_memset != NULL);
}

void check_and_run_memset(void) {
    if (is_ft_memset_available()) {
        t_memset();
    } else {
        printf("ft_memset does not exist\n");
    }
}

int is_ft_bzero_available(void) {
    return (ft_bzero != NULL);
}

void check_and_run_bzero(void) {
    if (is_ft_bzero_available()) {
        t_bzero();
    } else {
        printf("ft_bzero does not exist\n");
    }
}

int is_ft_memcpy_available(void) {
    return (ft_memcpy != NULL);
}

void check_and_run_memcpy(void) {
    if (is_ft_memcpy_available()) {
        t_memcpy();
    } else {
        printf("ft_memcpy does not exist\n");
    }
}

int is_ft_memmove_available(void) {
    return (ft_memmove != NULL);
}

void check_and_run_memmove(void) {
    if (is_ft_memmove_available()) {
        t_memmove();
    } else {
        printf("ft_memmove does not exist\n");
    }
}

int is_ft_strlcpy_available(void) {
    return (ft_strlcpy != NULL);
}

void check_and_run_strlcpy(void) {
    if (is_ft_strlcpy_available()) {
        t_strlcpy();
    } else {
        printf("ft_strlcpy does not exist\n");
    }
}

int is_ft_strlcat_available(void) {
    return (ft_strlcat != NULL);
}

void check_and_run_strlcat(void) {
    if (is_ft_strlcat_available()) {
        t_strlcat();
    } else {
        printf("ft_strlcat does not exist\n");
    }
}

int is_ft_toupper_available(void) {
    return (ft_toupper != NULL);
}

void check_and_run_toupper(void) {
    if (is_ft_toupper_available()) {
        t_toupper();
    } else {
        printf("ft_toupper does not exist\n");
    }
}

int is_ft_tolower_available(void) {
    return (ft_tolower != NULL);
}

void check_and_run_tolower(void) {
    if (is_ft_tolower_available()) {
        t_tolower();
    } else {
        printf("ft_tolower does not exist\n");
    }
}

int is_ft_strchr_available(void) {
    return (ft_strchr != NULL);
}

void check_and_run_strchr(void) {
    if (is_ft_strchr_available()) {
        t_strchr();
    } else {
        printf("ft_strchr does not exist\n");
    }
}

int is_ft_strrchr_available(void) {
    return (ft_strrchr != NULL);
}

void check_and_run_strrchr(void) {
    if (is_ft_strrchr_available()) {
        t_strrchr();
    } else {
        printf("ft_strrchr does not exist\n");
    }
}

int is_ft_strncmp_available(void) {
    return (ft_strncmp != NULL);
}

void check_and_run_strncmp(void) {
    if (is_ft_strncmp_available()) {
        t_strncmp();
    } else {
        printf("ft_strncmp does not exist\n");
    }
}

int is_ft_memchr_available(void) {
    return (ft_memchr != NULL);
}

void check_and_run_memchr(void) {
    if (is_ft_memchr_available()) {
        t_memchr();
    } else {
        printf("ft_memchr does not exist\n");
    }
}

int is_ft_memcmp_available(void) {
    return (ft_memcmp != NULL);
}

void check_and_run_memcmp(void) {
    if (is_ft_memcmp_available()) {
        t_memcmp();
    } else {
        printf("ft_memcmp does not exist\n");
    }
}

int is_ft_strnstr_available(void) {
    return (ft_strnstr != NULL);
}

void check_and_run_strnstr(void) {
    if (is_ft_strnstr_available()) {
        t_strnstr();
    } else {
        printf("ft_strnstr does not exist\n");
    }
}

int is_ft_atoi_available(void) {
    return (ft_atoi != NULL);
}

void check_and_run_atoi(void) {
    if (is_ft_atoi_available()) {
        t_atoi();
    } else {
        printf("ft_atoi does not exist\n");
    }
}

// Complétez de la même manière pour les autres fonctions...
