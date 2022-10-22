#include	<stdio.h>
/**
  *main-entry	of	the	program.
  *
  *Return:0	if	success
  */
int	main(void)
{
	int	i;
	int	j;

	for	(i	=	'a';	i	<=	'z';	i++)
	{
		putchar(i);
	}
	for	(j	=	'A';	j	<=	'Z';	j++)
	{
		putchar	(j);
	}
	putchar('\n');
	return	(0);
}

