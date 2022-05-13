#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name of theperson
 * @f: function name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
