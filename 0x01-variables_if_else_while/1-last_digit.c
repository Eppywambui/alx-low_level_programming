#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
/**
  *main-entry	point	of	the	program
  *
  *Return:return0
  */
int	main(void)

{
	int	n;
	int	ldigit;

	srand(time(0));
	n	=	rand()	-	RAND_MAX	/	2;
	ldigit	=	n	%	10;

	if	(last	digit	>	5)
	{
		printf("Last	digit	of	%d	is	%d	and	is	greater	than	5/n",	n,	ldigit);
	}
	else	if	(Last	digit	==i	0)
	{
		printf("Last	digit	of	%d	is	%d	and	is	0/n",	n,	ldigit);
	}
	else	if	(last	digit	<	6	&&	ldigit!	=	0)
	{
		printf("Last	digit	of	%d	is	%d	and	is	less	than	6	and	not	0\n",	n,	ldigit);
	}
	return	(0);
}

