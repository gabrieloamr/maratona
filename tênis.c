#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, j, vitorias = 0, derrotas = 0;
  char resultado[3];

  for (i = 1; i <= 6; i++) {
    printf("Partida %d: ", i);
    scanf(" %s", resultado);
    if (strcmp(resultado, "V") == 0) {
      vitorias++;
    } else if (strcmp(resultado, "P") == 0) {
      derrotas++;
    } else {
      printf("Resultado inválido!\n");
    }
  }

  if (vitorias >= 5) {
    printf("Grupo 1\n");
  } else if (vitorias >= 3) {
    printf("Grupo 2\n");
  } else if (vitorias >= 1) {
    printf("Grupo 3\n");
  } else
    printf("-1\n");

  return 0;
}
