#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string value
 * @n: string count
 * @...: string variable
 * Description: (nil) is printed if either string is NULL.
 *  Also nothing printed if separator is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
