#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Para compilar gcc -Wall code_5_3.c -o code_5_3.out
// Para ejecutar ./code_5_3.out

char* obtenerSubcadena(char*, int);
void testObtenerSubcadena(void);


int main (void) {
  testObtenerSubcadena();
  return 0;
}

char *obtenerSubcadena(char *array, int index) {
  long arraySize = strlen(array) - 1;

  if ((index + 1) > arraySize) {
    return '\0';
  }

  long size = (arraySize - index);

  char* subCadena = malloc(sizeof(char) * (size + 1));
  char* t = subCadena;

  for (long i = (index + 1); i < arraySize; i++) {
    *t = array[i];
    t++;
  }

  *t = '\0';

  return subCadena;
}

void testObtenerSubcadena(void) {
  char inputText[201];

  printf("Ingrese un texto de máximo 200 caracteres:\n");
  fgets(inputText, 201, stdin);
  printf("Se ingresó el siguiente texto: %s\n", inputText);

  char stringNumber[12];

  printf("Ingrese un el indice desde el cual desea realizar el sub string:\n");
  fgets(stringNumber, 12, stdin);
  int index = atoi(stringNumber);

  char* subString = obtenerSubcadena(inputText, index);
  printf("El substring es: %s\n", subString);
}