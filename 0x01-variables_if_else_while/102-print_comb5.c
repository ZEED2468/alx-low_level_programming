#include<stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int last;
	/* your code goes there */
	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = !(a == 98 && b == 99);
			putchar(48 + a / 10);
			putchar(48 + a % 10);
			putchar(' ');
			putchar(48 + b / 10);
			putchar(48 + b % 10);
			if (last)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
