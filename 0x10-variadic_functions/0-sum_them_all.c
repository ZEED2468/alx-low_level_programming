#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all parameters
 * @n: The number of the parameters
 * Return: return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list para;

	va_start(para, n);

	for (i = 0; i < n; i++)
		sum += va_arg(para, int);

	va_end(para);

	return (sum);
}
