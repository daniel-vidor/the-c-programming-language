#include <stdio.h>

/*
 * Exercise 1−8
 * Write a program to count blanks, tabs, and newlines.
 *
 * Note: In Windows, Ctrl-Z followed by Enter sends EOF.
 */

main() {
	int c, count;
	
	count = 0;
	
	printf("Please enter any characters...\n");
	
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ')
			++count;
	
	printf("Count of blanks, tabs, and newlines: %d\n", count);
}
