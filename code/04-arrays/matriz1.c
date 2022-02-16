#include <stdio.h>

void soma_matriz(int mat[5][4]){

  int l;
  int c;
  int sum_col;

  int biggest_value = 0;
  int biggest_index;

  for (c = 0; c < 4; c++) {
    sum_col = 0;

    for (l = 0; l < 5; l++){
      sum_col += mat[l][c];
    }

    if (sum_col > biggest_value) {
      biggest_value = sum_col;
      biggest_index = c;
    }

    printf("%d \n", sum_col);
  }

  printf("biggest value: %d at index: %d \n", biggest_value, biggest_index + 1);
}

int main() {
  int test_matrix[5][4] = {{1,2,3,4}, {1,2,3,4}, {5,7,3,4}, {9,2,8,9}, {0,0,0,4}};
  soma_matriz(test_matrix);
}