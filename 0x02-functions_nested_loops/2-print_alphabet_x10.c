#include "main.h"
/**
  *print_alphabet_x10	-	prints	alphabet	letters
  *ten	times
  *description:	the	function	uses	loop	to	operate
   *Return:no	return
 */
void	print_alphabet_x10(void)
{
	char	i,	k;

	for	(k	=	0;	k	<	10;	k++)
	{

		for	(i	=	'a';	i	<=	'z';	i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

