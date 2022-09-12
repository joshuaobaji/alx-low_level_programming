#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * followed by a new line
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int ch;

	for (ch =  'a'; ch <=  'z';  ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch  '<='  'Z';  ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
