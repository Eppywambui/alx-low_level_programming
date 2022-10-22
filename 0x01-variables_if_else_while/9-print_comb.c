#include <stdio.h>
/**
  *main-entry	point	of	the	program
  *
  *Return:0
  */
int	main(void)
{
	int	num;

	for	(num	=	'0';	num	<=	'9';	num++)
	{
		putchar(num);
		if	(num	==	'9')
			continue;

		putchar	(',');
		putchar	('	');
	}
	putchar	('\n');
	return	(0);
}

