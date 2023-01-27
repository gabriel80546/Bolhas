#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, j;
  int numeros[10] = { 0, 9, 1, 4, 2, 6, 7, 5, 8, 3 };
  int *saida;
  saida = (int*)calloc(10, sizeof(int));
  for(i = 0; i < 10; i++) {
    saida[i] = numeros[i];
  }
  for(i = 0; i < 10; i++) {
    printf("numeros[%i] = %i\n", i, numeros[i]);
  }
  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
      if(numeros[i] == saida[i]) {
        saida[i] = numeros[i];
      }
    }
  }
  for(i = 0; i < 10; i++) {
    printf("saida[%i] = %i\n", i, saida[i]);
  }
  return 0;
}
