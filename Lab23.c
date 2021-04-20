#include <stdio.h>
#include <math.h>

int main() {
  float a, x, y, z;

  printf("Задайте три цілих числа:\n");

  printf("\nВведіть число x: ");
  scanf("%f", &x);

  printf("Введіть число y: ");
  scanf("%f", &y);

  printf("Введіть число z: ");
  scanf("%f", &z);

  //Обчислення
  a = (1+y) * ((x + (y / (pow(x, 2) + 4))) / (expf(-x - 2) + (1 / (pow(x, 2) + 4))));

  printf("\nРезультат: %.3f\n", a);

  return 0;
}
