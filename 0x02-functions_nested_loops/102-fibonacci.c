#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */



int main(void)
{
int i;
int j = 50;
int a = 1;
int b = 2;
for (i == 1; i <= (j / 2); i++)
{
	printf("%li %li ", a, b);
	a += b;
	b += a;
}
if (j % 2 == 1)
{
	printf("%li", a);
}
printf("\n");
return (0);
}
