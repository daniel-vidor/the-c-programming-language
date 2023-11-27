#include <stdio.h>

/*
 * Exercise 1-4
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3c %6c\n", 'C', 'F');
    printf("--- ------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
    }
}

