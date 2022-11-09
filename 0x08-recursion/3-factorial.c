 #include "main.h"

/**
 *factorial - searches for the factotial of a number
  *@n: the number to find the factorial of
  *
  *Return: the factorial of thr number
  */

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}

