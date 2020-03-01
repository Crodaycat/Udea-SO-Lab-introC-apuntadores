#include <stdio.h>

// Para compilar gcc -Wall code_5_2.c -o code_5_2.out
// Para ejecutar ./code_5_2.out

int contarCaracter(char*, char);
int obtenerIndice(char*, char);
void testObtenerIndice(void);

int main (void) {
  testObtenerIndice();
  return 0;
}


/**
 *   @brief  Cuenta las veces que aparece un caracter determinado dentro de una cadena.
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  ch es el caracter a averiguar
 *   @return el numero de veces que aparece ch en array o -1 si no aparece.
 */
int contarCaracter(char *array, char ch) {
  int charCount = 0;

  for(char *t = array; *t != '\0'; t++)
    if (*t == ch)
      charCount++;

  return charCount;
}

int obtenerIndice(char *array, char ch) {
  int indexOfChar = -1;

  int timesInString = contarCaracter(array, ch);

  if (timesInString == 0) {
    return indexOfChar;
  }

  for (char *t = array; *t != '\0'; t++) {
    indexOfChar++;

    if (*t == ch)
      break;
  }

  return indexOfChar;

}

void testObtenerIndice(void) {
  char inputText[201];

  printf("Ingrese un texto de máximo 200 caracteres: \n");
  fgets(inputText, 201, stdin);
  printf("Se ingresó el siguiente texto: %s\n", inputText);

  printf("Ingrese un caracter para buscar su primera aparición en el texto ingresado: \n");
  char charToSearch = getchar();
  printf("Se ingresó el siguiente caracter: %c\n", charToSearch);

  int indexOfChar = obtenerIndice(inputText, charToSearch);

  printf("El caracter %c se encuentra en la posición %d en el texto. (indexado a 0)\n", charToSearch, indexOfChar);
}