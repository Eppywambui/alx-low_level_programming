#include	<stdio.h>

/**
 *main-program	entry	point.
 *
 *
 *Description;	program	that	prints	all	numbers	of	base16	in	lowercase
 *
 *
 *return:0	if	no	error,	non	zero	if	error.
 *
 *
 */
int	main(void)
{
	int	i;
	char	hexvalues[]	=
		"0123456789abcdef";

	for	(i	=	0;	i	<	16;	i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return	(0);
}

