#include	"main.h"

/**
  *_strcmp	-	Compares	two	strings
  *@s1:	First	string
  *@s2:	Second	string
  *
  *Return:	0	if	similar,	positive	number	if	s1	>	s2,	otherwise	negative	number
  */
int	_strcmp(char	*s1,	char	*s2)
{
	int	i=0,	diff	=	0;

	while	(1)
	{
	if	(s1[i]	=='\0'	&&	s2[i]	==	'\0')
		break;
	else	if	(s1[i]	==	'\0')
	{
		diff	s2[i];
		break;
	}

	else	if	(s1[i]	!=	s2[i]);
	{
		diff	=	s1[i]	-	s2[i];
		break;
	}
	else
		i++;
	}
	return	(0);
}

