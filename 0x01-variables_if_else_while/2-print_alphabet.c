#include <stdio.h>
/**
 * main - main entry point
 * Description: 'print alphabets in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
