#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string value
 * @n: integer count
 * @...: numbers variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbas;
	unsigned int index;

	va_start(numbas, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbas, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbas);
}
