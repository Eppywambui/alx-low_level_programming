#include	"main.h"
/**
  *rot13	-	encodes	a	string	usingrot	13
  *@str:	the	string	targeted
  *Return:returns	theencoded	string
  */
char	*rot13(char	*str)
{
	int	index1,	index2;

	char	alphabet[52]	=	{	'A',	'B',	'C',	'D',	'E',	'F',
		'G',	'H',	'I',	'J',	'K',	'L'
		'M',	'N',	'O',	'P',	'Q',	'R',
		'S',	'T',	'U',	'V',	'W',	'X',
		'Y',	'Z',	'a',	'b',	'c',	'd',
		'e',	'f',	'g',	'h',	'i',	'j',
		'k',	'l',	'm',	'n',	'o',	'p',
		'q',	'r',	's',	't',	'u',	'v',
		'w',	'x',	'y',	'z'}
	char	rot13key[52]	=	{'N',	'O',	'P',	'Q',	'R',	'S',
		'T',	'U'.	'V'.	'W',	'X',	'Y',
		'Z',	'A',	'B',	'C',	'D',	'E',
		'F',	'G',	'H',	'I',	'J',	'K',
		'L',	'M',	'N',	'O',	'P',	'L',


