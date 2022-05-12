#include <stdarg.h>
#include <stdio.h>

/**
 * variadic function for sum of numbers
 * @n: n args
 * return: sum or if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if(n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
		sum += va_arg(arguments, int);
		}
	va_end(arguments);
	}
	return sum;
}
