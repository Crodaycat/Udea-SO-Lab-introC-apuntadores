# include <stdio.h>
#include <stdlib.h>

void testCalcMedium(void);
float calcMedium(int[], int);

int main (void) {
  testCalcMedium();
  return 0;
}

void testCalcMedium(void) {
  int array[] = { 0, 1, 2, 3, 4, 5, 6, 10, 30, 25 };
  float medium = calcMedium(array, 10);

  printf("La media del vector es: %f\n", medium);
}

float calcMedium(int data[], int dataLength) {
  int total = 0;

  for (int i = 0; i < dataLength; i++) {
    total += data[i];
  }

  float medium = (float) total /  (float) dataLength;

  return medium;
}

