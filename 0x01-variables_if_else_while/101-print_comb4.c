#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * Return: an integer to signify success or failure
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if ((i < j && j < k) && (i != j && j != k && k != i))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
