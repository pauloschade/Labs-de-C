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

void limiar(image *pimg, int lim) {

    int l,c;

    for (l=0; l < pimg -> heigth; l++) {
        for (c=0; c < pimg -> length; c++) {
            pimg -> matrix[l][c] = (pimg -> matrix[l][c] > lim ? 255 : 0);
        }
    }
}

int main() {

    image img;
    int lim = 1;
    int lim_value = 100;

    read_image(&img);
    // printf("deseja limializar imagem?\n 0 - Nao\n 1 - sim\n");
    // scanf("%d\n", &lim);
    if (lim == 1) {
        // printf("Valor limiar\n");
        // scanf("%d", &lim_value);
        limiar(&img, lim_value);
    }
    write_img(img);

    return 0;
}

