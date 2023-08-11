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
	int count = 0;

	do {
		printf("%d", count++);

	} while (count < 10);

	putchar('\n');

	return (0);

}
