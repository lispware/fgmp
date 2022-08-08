#include "gmp.h"

void factorial(unsigned int n, mpz_t result)
{
    mpz_set_ui(result, 1);
    while (n > 1)
    {
        mpz_mul_ui(result, result, n);
        n = n-1;
    }
}

int main()
{
    //unsigned int n = 34530; // promt user
    unsigned int n = 5; // promt user
    mpz_t fact;
    mpz_init(fact);
    factorial(n, fact);
    char *buffer = mpz_get_str(NULL, 10, fact);
    printf("%s\n", buffer);


    long long out = mpz_get_ui(fact);
    printf("THE NUMBER = %d\n", out);
    mpz_clear(fact);



    mpz_t BASE, RES;
    mpz_init(BASE);
    mpz_init(RES);
    mpz_set_ui(BASE, 2);
    mpz_pow_ui(RES, BASE, 31);

    buffer = mpz_get_str(NULL, 10, RES);
    printf("RES = %s\n", buffer);
    out = mpz_get_ui(RES);
    printf("THE NUMBER = %d\n", out);



    return 0;
}
