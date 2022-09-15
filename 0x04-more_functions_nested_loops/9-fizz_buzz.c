#include <stdio.h>

/**
  * main - print 1 to 100,
  * multiples of 3 with Fizz,
  * multiples of 5 with Buzz
  * and multiple of both 3 and 5 with FizzBuzz
  * Return: 0 on success
  */

int main(void)

{
int n;
for (n = 1; n <= 100; n++)
{
	if (n % 15 == 0)
	{
		printf("FIZZBUZZ");
	}
	else if (n % 5 == 0)
	{
		printf("BUZZ");
	}
	else if (n % 3 == 0)
	{
		printf("FIZZ");
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
}
