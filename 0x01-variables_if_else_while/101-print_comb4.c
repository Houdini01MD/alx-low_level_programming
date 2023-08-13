#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (z = 2; j <= 9; z++)
			{
				if (i != j && j != z && i < j && j < z)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(z + '0');
					if (i + j + z != 24)
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
