#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (l = 50; l < 58; l++)
		{
			if (l > m && m > n)
			{
				putchar(n);
				Putchar(m);
				putchar(l);
				if (n != 55 || m !=56)
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



