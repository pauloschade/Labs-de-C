#include <stdio.h>

typedef struct {
    int x;
    int y;
} ponto;

int medio(ponto a, ponto b, ponto *m) {
  if(a.x == b.x && a.y == b.y) {
    return 0;
  }

  m -> x = (a.x + b.x)/2;
  m -> y = (a.y + b.y)/2;
  return 1;
}

int main() {
  ponto p1;
  ponto p2;
  ponto pm;

  printf("x p1 \n");
  scanf("%d", &p1.x);
  printf("y p1 \n");
  scanf("%d", &p1.y);

  printf("x p2 \n");
  scanf("%d", &p2.x);
  printf("y p2 \n");
  scanf("%d", &p2.y);

  int success = medio(p1, p2, &pm);

  if (success == 0) {
    printf("Error, points are equal \n");
    return 0;
  }

  printf("medio x: %d, medio y: %d \n", pm.x, pm.y);
  return 1;
}