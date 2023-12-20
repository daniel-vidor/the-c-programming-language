#include <stdio.h>

/*
 * Exercise 1−9
 * Write a program to copy its input to its output, replacing each string of
 * one or more blanks by a single blank.
 */

main()
{
	int c, prevC;

	printf("Please enter any characters...\n");

	while ((c = getchar()) != '\n')
	{
		if (!(c == ' ' && prevC == ' '))
		{
			printf("%c", c);
		}
		prevC = c;
	}
}
