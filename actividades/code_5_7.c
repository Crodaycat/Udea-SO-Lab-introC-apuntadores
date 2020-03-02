#include <stdio.h>


void shellSort(float[], int);
float calcMedium(float[], int);

int main(void) {
  float studentsCalifications[10][5] = {
    {5.0, 4.5, 4.8, 4.0, 3.8},
    {3.6, 4.3, 3.1, 3.5, 4.8},
    {2.5, 4.0, 2.5, 3.5, 4.5},
    {2.3, 2.8, 3.5, 3.2, 3.9},
    {2.5, 2.0, 5.0, 1.5, 4.0},
    {4.6, 3.5, 3.9, 4.2, 4.7},
    {3.2, 3.0, 2.9, 3.4, 2.3},
    {3.4, 3.6, 3.2, 3.8, 4.8},
    {5.0, 3.4, 3.6, 3.1, 2.5},
    {4.5, 5.0, 4.3, 3.2, 3.9}
  };

  float studentsMedia[10] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  float asignatureMedia[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  float classMedia;

  for(int i = 0; i < 10; i++) {
    studentsMedia[i] = calcMedium(studentsCalifications[i], 5);

    asignatureMedia[0] += studentsCalifications[i][0];
    asignatureMedia[1] += studentsCalifications[i][1];
    asignatureMedia[2] += studentsCalifications[i][2];
    asignatureMedia[3] += studentsCalifications[i][3];
    asignatureMedia[4] += studentsCalifications[i][4];
  }

  asignatureMedia[0] = asignatureMedia[0] / 10;
  asignatureMedia[1] = asignatureMedia[1] / 10;
  asignatureMedia[2] = asignatureMedia[2] / 10;
  asignatureMedia[3] = asignatureMedia[3] / 10;
  asignatureMedia[4] = asignatureMedia[4] / 10;

  shellSort(studentsMedia, 10);

  printf("Media por alumno: \n");

  for (int i = 0; i < 10; i++) {
    printf("Alumno %d media: %f\n", (i + 1), studentsMedia[i]);
  }

  printf("\n");

  printf("Media por asignatura: \n");

  for (int i = 0; i < 5; i++) {
    printf("Asignatura %d media: %f\n", (i + 1), asignatureMedia[i]);
  }

  printf("\n");

  classMedia = calcMedium(studentsMedia, 10);

  printf("La media de la clase es: %f\n", classMedia);

  return 0;
}

float calcMedium(float data[], int dataLength) {
  float total = 0;

  for (int i = 0; i < dataLength; i++) {
    total += data[i];
  }

  float medium = (float) total /  (float) dataLength;

  return medium;
}

void shellSort(float data[], int dataLength) {
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