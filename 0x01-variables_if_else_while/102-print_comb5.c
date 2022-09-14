#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * Return: an integer to signify success or failure
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8 && c == 9 && d == 9))
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
