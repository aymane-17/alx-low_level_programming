#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: a string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strn;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strn = va_arg(ap, char *);

		if (strn)
			printf("%s", strn);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
