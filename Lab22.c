#include <stdio.h>
#include <math.h>

int main() {
  const int a = 25;
  const int b = 52;
  const int c = -9;
  float y;

  y = ((5*a - b + pow(c, 2)) / (2+c)) + 1;

  printf("Результат:\n\n");
  printf("Відповідь: ");
  printf("y = %.1f", y);
  return 0;
}
