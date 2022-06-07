#include "main.h"

/**
 * main - prints string "_putchar" using
 * my own header file and putchar() function prototype defined in it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Jud[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(Jud[i]);
	}
	_putchar('\n');
	return (0);
}
