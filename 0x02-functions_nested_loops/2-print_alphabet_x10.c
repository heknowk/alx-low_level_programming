#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;

	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(ch);
			x++;
		}
		_putchar('\n');
		y++;
	}
}y
