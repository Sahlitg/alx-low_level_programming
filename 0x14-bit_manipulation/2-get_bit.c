#include <stdio.h>
#include "main.h"

/**
 *  get_bit - get a bit value
 *
 *  @n: number
 *  @index: index
 *
 *  Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> (index)) & 1);
}
