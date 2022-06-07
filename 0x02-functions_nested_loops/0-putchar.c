#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i[] = "_putchar";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}

