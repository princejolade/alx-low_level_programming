#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: "Prints the alphabet letters in lower case"
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int count = 97,  LAST_LETTER = count + 26;

	do {
		putchar(count);
		count++;

	} while (count < LAST_LETTER);

	putchar('\n');

	return (0);

}
