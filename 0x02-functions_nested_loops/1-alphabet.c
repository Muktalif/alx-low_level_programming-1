#include "main.h"
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Descrition: void print_alphabet(void) print with void return
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
