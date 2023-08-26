#include "../libtest.h"

static void t_itoa_u(int n) {
    char *result;

    printf("Number: %d\n", n);

    result = ft_itoa(n);
    printf("ft_itoa: ");
    if (result)
        printf("%s\n", result);
    else
        printf("no result");
    free(result);

    printf("\n");
}

void t_itoa(void) {
    printf("\n--------------------\ntesting ft_itoa:\n");
    
    t_itoa_u(0);
    t_itoa_u(123);
    t_itoa_u(-456);
    t_itoa_u(7890);
    t_itoa_u(-12345);
    
    // Cas limites
    t_itoa_u(2147483647);   // Valeur maximale d'un int positif
    t_itoa_u(-2147483648);  // Valeur minimale d'un int négatif

    // Ajouter plus de cas de test

    // Ne pas inclure le cas t_itoa_u(NULL, NULL) ici
}

int main()
{
    t_itoa();
}