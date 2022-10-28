#include	"main.h"

/**
  **_strcat	-	concatenates	two	strings	and	overites	the
  *null	byte	at	the	end	of	the	dest,	and	adds	null	byte	after
  *concartenation
  *@dest:	string	that	accepts	concartenated	string	from	src
  *@src:	string	too	be	concartenatd
  *
  *Return:	dest
  */

char	*_strcat(char	*dest,	char	*src)
{
	int	index	=	0,	dest_len	=	0;

	while	(dest[index++])
		dest_len++;

	for	(index	=	0;	src[index];	index++)
		dest[dest_len++]	=	src[index];

	return	(dest);
}

