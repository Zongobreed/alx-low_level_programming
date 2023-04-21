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
