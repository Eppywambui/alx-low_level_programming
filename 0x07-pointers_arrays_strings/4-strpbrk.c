#include "main.h"
/**
  *_strbrk - The _strbrk() function locates the first
  *occurence in thr string s of any of the bytes in
  *the string accept
  *
  *@s: string where search is made
  *@accept: string where searched bytes are located
  *
  *Return: returns a pointer to the bytr in s that matches
  *one of the bytes in accept, or NULL if no such byte is found
  */
char *_strbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}

