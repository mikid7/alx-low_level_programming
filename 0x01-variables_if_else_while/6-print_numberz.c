#include <stdio.h>

/**
 * main - prints all single digit numbers
 * Return: 0
 */

int main(void)
{
	unsigned int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
