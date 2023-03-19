#include <stdio.h>

/**
 * main - main entry
 * Description: 'print numbers of base 16 in lowercase, followed by a new line'
 * Return: always 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
