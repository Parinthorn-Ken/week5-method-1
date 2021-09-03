#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
void factorial(int x);
int main() {
	int x;
	printf("enter the number : ");
	scanf("%d", &x);
	factorial(x);
	return 0;
}
void factorial(int x) {
	int y;
	y = x;
	for (; x > 1; )
	{
		x = x - 1;
		y = y * x;
	}
	printf("Factorial = %d", y);
}
