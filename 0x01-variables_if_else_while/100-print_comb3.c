#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * Return: an integer to signify success or failure
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (!(j <= i))
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
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
