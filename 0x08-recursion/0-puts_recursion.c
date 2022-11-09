#include "main.h"
/**
  *_puts_recursion - prints a sring followed by a new line
  *@s: character to be printed
  *Return: returns void
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

