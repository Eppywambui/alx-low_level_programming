#include "main.h"

/**
 *_strncat	-	concates	twO	strings	using	at	most	n	bytes	from	src
  *@dest:	string	that	acceepts	concatenated	string	from	src
  *@src:	string	to	be	concatenate
  *@n:	number	of	bytes	used	to	conctenate	src	to	dest
  *Return: pointer	to	string	dest
  */
char	*_strncat(char	*dest,	char	*src,	int	n)
{

	int	destLen,	srcLen;

	while
	{
		destLen	=	0;	dest[destLen]	!=	'\0';	destLen++;
	}

	for	(srcLen	=	0;	src[srcLen]	!=	'\0'	&&	n	>	0;	srcLen++,	n--,	destLen++)
	{
		dest[destLen]	=	src[srcLen];
	}

	return	(dest);
}

