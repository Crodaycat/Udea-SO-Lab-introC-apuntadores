#include <stdio.h>

// Para compilar gcc -Wall code_5_1.c -o code_5_1.out
// Para ejecutar ./code_5_1.out

int contarCaracter(char*, char);
void testContarCaracter(void);

int main (void) {
  testContarCaracter();
  
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

void testContarCaracter(void) {
  char textInput[201];
  
  printf("Ingrese un texto de máximo 200 caracteres: \n");
  fgets(textInput, 201, stdin);
  printf("Se ingresó el siguiente texto: %s\n", textInput);

  printf("Ingrese un caracter para buscar en el texto ingresado: \n");
  char charToSearch = getchar();

  printf("Se ingresó el siguiente caracter: %c\n", charToSearch);
  
  int charTimes = contarCaracter(textInput, charToSearch);

  printf("El caracter %c se encuentra %d veces en el texto ingresado.\n", charToSearch, charTimes);
}