#include "main.h"

/**
 *  print_square - print a square of #'s given size
 *   * @size: size to draw
 */

void print_square(int size)
{
int row, columm;
if (size <= 0)
{
	_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (columm = 0; columm < size; columm++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
