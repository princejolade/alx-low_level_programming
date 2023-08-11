#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 57)
	{
		i = 49;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (e == 56 && i == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
