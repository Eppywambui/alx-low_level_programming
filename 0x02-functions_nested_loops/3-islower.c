#include	"main.h"
/**
  *_islower-	controls	if	a	character	is	in	lower	case
  *@c:	character	to	check	if	it	os	lowercase
  *Return:0-if	lowercase,	1-if	not
  */


int	_islower(int	c)
{
	if	(c	>=	'a'	&&	c	<=	'z')
	{
		return	(1);
	}
	else
	{
		return	(0);
	}
}

