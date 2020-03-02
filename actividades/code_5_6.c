# include <stdio.h>
#include <stdlib.h>

void testCalcMedium(void);
int calcMedium(int[], int);
void shellSort(int[], int);

int main (void) {
  testCalcMedium();
  return 0;
}

void testCalcMedium(void) {
  int array[] = { 0, 1, 2, 3, 4, 23, 6, 10, 30, 25, 5 };
  int medium = calcMedium(array, 11);

  printf("La mediana del vector es: %d\n", medium);
}

int calcMedium(int data[], int dataLength) {
  int medium = dataLength / 2;

  shellSort(data, dataLength);

  return data[medium];
}

void shellSort(int data[], int dataLength) {
  int i, j, k, tmp;

  for (i = dataLength / 2; i > 0; i = i / 2) {
    for (j = i; j < dataLength; j++) {
      for(k = j - i; k >= 0; k = k - i) {
        if (data[k+i] <= data[k]) {
          break;
        } else {
          tmp = data[k];
          data[k] = data[k+i];
          data[k+i] = tmp;
        }
      }
    }
  }
}
