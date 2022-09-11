3INCLUDE <STDIO.H>

/** 
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char ch = a'a;

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putschar(ch);
		}
		ch++;
	}
	putschar('\n');
	return (0);
}
