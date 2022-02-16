#include <stdio.h>

double square(double x) {
  return x * x;
}

double avg(double arr[], int n) {
  double sum = 0;

  int i;
  for(i=0; i < n; i++) {
    sum += arr[i];
  }

  return sum/n;
}

double var(double arr[], int n, double average) {
  double square_sum = 0;

  int i;
  for (i=0; i < n; i++){
    square_sum += square(arr[i] - average);
  }

  return square_sum/(n-1);
}

void array() {
  int size;
  int i;

  printf("array size \n");
  scanf("%d", &size);
  
  double new_arr[size];

  for (i = 0; i < size; i ++) {
    printf("%d element of array \n", i + 1);
    scanf("%lf", &new_arr[i]);
  }

  double average = avg(new_arr, size);

  printf("average of array %lf \n", average);
  printf("Variance of array %lf \n", var(new_arr, size, average));
}

int main() {
  array();
}