#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *clone;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		clone = va_arg(arguments, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
