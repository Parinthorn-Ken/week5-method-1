#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int factorial(int x);
int main() {
	int x,y;
	printf("enter positive number : ");
	scanf("%d", &x);
	y = x;
	x=factorial(x);
	printf("Factorial of %d = %d", y,x);
	return 0;
}
int factorial(int x) {
	int y;
	y = x;
	for (; x > 1; )
	{
		x = x - 1;
		y = y * x;
	}
	return y;
}
