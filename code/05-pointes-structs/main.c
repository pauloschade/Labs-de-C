/*
 * Escreva seu programa aqui!
 */
#include <stdio.h>

void sum_sub(int a, int b, int *psum, int *psub) {
  *psum = a + b;
  *psub = a - b;
}

void peri_area(int heigth, int side_length, int *area, int *perimeter) {
  *area = heigth * side_length;
  *perimeter = 2 * (heigth + side_length);
}

void ex1() {
  int sum;
  int sub;

  int n1;
  int n2;

  printf("first number \n");
  scanf("%d", &n1);

  printf("second number \n");
  scanf("%d", &n2);

  sum_sub(n1,n2, &sum, &sub);

  printf("sum: %d, sub: %d\n", sum, sub);
}

void ex2() {
  int area;
  int perimeter;

  int h;
  int l;

  printf("heigth \n");
  scanf("%d", &h);

  printf("length \n");
  scanf("%d", &l);

  peri_area(h, l, &area, &perimeter);

  printf("area: %d, perimeter: %d \n", area, perimeter);
}

int main() {
  ex2();

  return 0;
}