#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 0, b = 0;
	printf("Enter two numbers (a, b): ");
	scanf_s("%d %d", &a, &b);

	printf("Before swap: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);

	return 0;
}