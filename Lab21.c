#include <stdio.h>
#include <math.h>


int main() {
	int a, b, dil, dif, sum;

	printf("a - "); scanf("%d", &a);
	printf("b - "); scanf("%d", &b);

	dil = a % b;
	dif =  b - a;
	sum = a + b;

printf("������� �� ������ 1-�� ����� �� 2-�: %d\n", dil);
printf("������ 2-�� � 1-��: %d\n", dif);
printf("���� �����: %d\n", sum);

  
	return 0;
}
