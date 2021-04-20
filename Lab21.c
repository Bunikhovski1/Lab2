#include <stdio.h>
#include <math.h>


int main() {
	int a, b, dil, dif, sum;

	printf("a - "); scanf("%d", &a);
	printf("b - "); scanf("%d", &b);

	dil = a % b;
	dif =  b - a;
	sum = a + b;

printf("залишок від ділення 1-го числа на 2-е: %d\n", dil);
printf("різницю 2-го і 1-го: %d\n", dif);
printf("суму чисел: %d\n", sum);

  
	return 0;
}
