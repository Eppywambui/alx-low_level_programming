#include "main.h"
/**
  *_memset - the _memset() function fills
  *the first bytes of the memeory area
  *pointed to by s with the constant byte b
  *@s: targert
  *@b: constant byte
  *@n: number of byte
  *Return: return new value ot the target
  */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}

