#include <stdarg.h>
#include <stdio.h>
/**
 * variadic function for sum of numbers
 *
 * return: sum or if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;
	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return sum;
}

