#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @str: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *str)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (str);
}
