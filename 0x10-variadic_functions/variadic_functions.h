#ifdef _VARIADIC_FUNCTION_H
#define _ VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>

typedef struct fmt
{
	char *f
		void (*p)(va_list s);
}my_fmt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
int _strlen_recursion(char *s);
void print_c(va_list s);
void print_i(va_list s);
void print_f(va_list s);
void print_s(va_list s);

#endif
