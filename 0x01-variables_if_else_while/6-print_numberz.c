#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: "Prints all single digit numbers of base 10 starting from 0"
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int count = 48, max = 57;

	do {
		putchar(count++);

	} while (count <= max);

	putchar('\n');

	return (0);

}
