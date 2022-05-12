#include <stdarg.h>
#include <stdio.h>
/**
 * variadic function for sum of numbers
 *
 * return: sum or if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...);
{
	int sum = 0;
	var_list ptr;
	var_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += var_arg(ptr, int);
	va_end(ptr);
	return sum;
}

