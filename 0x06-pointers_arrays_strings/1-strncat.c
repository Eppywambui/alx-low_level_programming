#include "main.h"

/**
 *_strncat	-	concates	two	strings	using	at	most	n	bytes	from	src
  *@dest:	string	that	accepts	concatenated	string	from	src
  *@src:	string	to	be	concatenate
  *@n:	number	of	bytes	used	to	conctenate	src	to	dest
  *Return: pointer	to	string	dest
  */
char	*_strncat(char	*dest,	char	*src,	int	n)
{

	int	index	=	0,	dest_len	=	0;

	while	(dest[index++])
		dest_len++;

	for	(index	=	0;	src[index]	&&	index	<	n;	index++)
		dest[dest_len++]	=	src[index];

	return	(dest);
}

