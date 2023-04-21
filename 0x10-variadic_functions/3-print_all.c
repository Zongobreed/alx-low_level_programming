#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: listings
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *gap = "";

	va_list roll;

	va_start(roll, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", gap, va_arg(roll, int));
					break;
				case 'i':
					printf("%s%d", gap, va_arg(roll, int));
					break;
				case 'f':
					printf("%s%f", gap, va_arg(roll, double));
					break;
				case 's':
					str = va_arg(roll, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", gap, str);
					break;
				default:
					i++;
					continue;
			}
			gap = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(roll);
}
