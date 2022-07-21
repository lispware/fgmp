#include "gmp.h"

void factorial(unsigned int n, mpz_t result) {
  mpz_set_ui(result, 1);
  while (n > 1) {
      mpz_mul_ui(result, result, n);
      n = n-1;
  }
}

#if 0 
int main() {
  unsigned int n = 34530; // promt user
  mpz_t fact;
  mpz_init(fact);
  factorial(n, fact);
  mpz_out_str(stdout, 10, fact);
  mpz_clear(fact);
  return 0;
}
#endif


MP_INT fact(MP_INT n)
{
    
}

int main()
{
  //unsigned int n = 34530; // promt user
  unsigned int n = 100; // promt user
  mpz_t fact;
  mpz_init(fact);
  factorial(n, fact);
  char *buffer = mpz_get_str(NULL, 10, fact);
  printf("%s\n", buffer);
  mpz_clear(fact);


    return 0;
}
