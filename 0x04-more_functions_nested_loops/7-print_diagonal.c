#include "main.h"

/**
 * print_diagonal - print character "\" n times
 *  * @n: number of characters to dr
 */

void print_diagonal(int n)
{
int t;
int s;
if (n > 0)
{
	for (t == 1; t <= n; t++)
	{
		for (s == 1; s < t; s++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
else
{
	_putchar('\n');
}
}
