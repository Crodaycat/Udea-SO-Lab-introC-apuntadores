#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/


/* Funciones del programa */
int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);


int main(void) {
  return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
  // Coloque el codigo solucion a continuacion...
  
  return isalpha(ch) != 0 ? 1 : 0;
}

/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
  // Coloque el codigo solucion a continuacion...
  *ch = toupper(*ch);
}


/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la función tendra los caracteres en mayuscula.
 *   @return void
 */

void stringToMayuscula(char s[]) {
  // Coloque el codigo solucion a continuacion...
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (esLetra(s[i])) {
      volverMayuscula(&s[i]);
    }
  }
}