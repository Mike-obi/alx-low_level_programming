#include <stdio.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int m, o;

	for (m = 0; m <= 9; m++)
	{
		for (o = 1; o <= 9; o++)
		{
			if (o > m)
			{
				putchar(m + '0');
				putchar(o + '0');
				if (m != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
