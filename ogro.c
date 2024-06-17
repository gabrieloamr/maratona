#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Digite um número de 0 a 10:\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("*\n*");
    } else if (num == 1) {
        printf("I\n*");
    } else if (num == 2) {
        printf("II\n*");
    } else if (num == 3) {
        printf("III\n*");
    }  else if (num == 4) {
        printf("IIII\n*");
    }  else if (num == 5) {
        printf("IIIII\n*");
    } else if (num == 6) {
        printf("IIIII\nI");
    } else if (num == 7) {
        printf("IIIII\nII");
    } else if (num == 8) {
        printf("IIIII\nIII");
    } else if (num == 9) {
        printf("IIIII\nIIII");
    } else if (num == 10) {
        printf("IIIII\nIIIII");
    } else {
        printf("Insira um número válido!\n");
    }

    return 0;
}
