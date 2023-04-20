#include <stdio.h>

#define PALAVRA 50

int main() {
  char pString[PALAVRA + 1], inversa[PALAVRA + 1];

  printf("Digite uma string de até %d caracteres: ", PALAVRA);
  scanf("%s", pString);

  // Calcula o tamanho da string
  int length = 0;
  while (pString[length] != '\0') {
    length++;
  }

  // Inverte a string
  for (int i = 0; i < length; i++) {
    inversa[i] = pString[length - 1 - i];
  }
  inversa[length] = '\0';

  printf("String original: %s\n", pString);
  printf("String invertida: %s\n", inversa);

  return 0;
}
