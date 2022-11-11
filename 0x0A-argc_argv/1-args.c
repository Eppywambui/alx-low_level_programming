#include <stdio.h>

/**
  * main - prints the number of arguments
  *@argc: number or arguments
  *@argv:array of arguments
  *Return: the number of arguments
  */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

