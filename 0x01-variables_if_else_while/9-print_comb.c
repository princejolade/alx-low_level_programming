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
	int count;

	for (count = 48; count <= 57; count++)
	{

		putchar(count);

		if (count != 57)
		{

			putchar(44);
			putchar(32);

		}
	}

	putchar('\n');

	return (0);

}
