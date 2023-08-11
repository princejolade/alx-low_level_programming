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
	int count = 48, max = 102;

	while (count <= max)
	{
		if (count <= 57 || (count > 96 && count <= 102))
			putchar(count);

		count++;

	}

	putchar('\n');

	return (0);

}
