#include <stdio.h>

int IsDivisible(int x, int n)
{
   (x % n) == 0 ? printf("Multiplo \n") : printf("nao multiplo \n");
   return 0;
}

void checaMultiplo(){
    int n1;
    int n2;

    int unused __attribute__((unused));

    do {

      printf("first value \n");
      unused = scanf("%d", &n1);
      printf("second value \n");
      unused = scanf("%d", &n2);

      n2 == 0 ? printf("second input zero \n") : IsDivisible(n1, n2);
    } while (n1 != 0 || n2 != 0);
    
}

int main(int argc, char *argv[]) {

  checaMultiplo();
  return 0;
}
