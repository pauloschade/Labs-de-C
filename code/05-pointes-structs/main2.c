#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;

int euclidean(ponto p1, ponto p2) {
  return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y), 2));
}

void main() {
  ponto p1;
  ponto p2;

  printf("x p1 \n");
  scanf("%d", &p1.x);
  printf("y p1 \n");
  scanf("%d", &p1.y);

  printf("x p2 \n");
  scanf("%d", &p2.x);
  printf("y p2 \n");
  scanf("%d", &p2.y);

  printf("euclidean: %d \n", euclidean(p1, p2));
}