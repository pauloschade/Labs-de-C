#include <stdio.h>


#define STRING_LEN 10 

typedef struct {
    int heigth;
    int length;
    int matrix[640][480];
} image;

void read_image(image *pimg) {
    // line column
    int l, c;

    // Discard start
    char str[STRING_LEN];
    fgets(str, STRING_LEN, stdin);

    //Get heigth and length
    int discart;
    scanf("%d%d", &(pimg -> length), &(pimg -> heigth));

    //Discard start 255
    scanf("%d", &discart);

    //Le imagem do terminal
    for (l=0; l < pimg -> heigth; l++) {
        for (c=0; c < pimg -> length; c++) {
            scanf("%d", &(pimg -> matrix[l][c]));
        }
    }
}

void write_img(image img) {
  //Header
  printf("P2\n");
  printf("%d %d\n", img.length, img.heigth);
  printf("%d\n", 255);

  // line column
  int l, c;
  //Escreve imagem em arquivo
  for (l=0; l < img.heigth; l++) {
      for (c=0; c < img.length; c++) {
          printf("%d ", img.matrix[l][c]);
      }
      printf("\n");
  }
}

void crop(image img, image *pcropped_img, int max_heigth, int max_length ) {

  pcropped_img -> heigth = max_heigth;
  pcropped_img -> length = max_length;
  // line column
  int l, c;
  //Escreve imagem em arquivo
  for (l=0; l < max_heigth; l++) {
      for (c=0; c < max_length; c++) {
        pcropped_img -> matrix[l][c] = img.matrix[l][c];
      }
  }
}

void blur(image img, image *pblurred_img) {
  // line column
  int count;
  int row, col;
  for (row=0; row < img.heigth; row++) {
    for (col=0; col < img.length; col++) {

      count = 0;
      int rowCoords[] = { row-1, row, row+1 };
      int colCoords[] = { col-1, col, col+1 };

      for(int r = 0; r < 3; r++) {
        int prow = rowCoords[r];

        if (prow >= 0 && prow <= img.heigth) {
            for (int c = 0; c < 3; c++) {

              int pcol = colCoords[c];

              if (pcol >= 0 && pcol <= img.length) {
                
              }
              
          }
        }

      }
    }
  }
}

int main() {

  int max_h, max_l;
  image img, cropped_img;

  read_image(&img);

  max_h = 50;
  max_l = 50;

  crop(img, &cropped_img, max_h, max_l);
  
  write_img(cropped_img);

  return 0;
}