#include "main.h"
/**
  *_memcpy - The _memcpy() function copies n bytes
  *from memory ara src to memory area dest
  *@dest: area wgere bytes are copied to
  *@src: area where bytes are coied from
  *@n: number of bytes to copy
  *Return: reeturns a pointer to n
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

