#include <stdio.h>
#include <unistd.h>

/**
 * main - Entr point
 * followed by a new line
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int ch;

	for (ch =  'a'; '<='  'z';  ch++)
		putchar(ch);
	for (ch = 'A'; ch  '<='  'Z';  ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
