#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	char lalph = 'a';
	char ualph = 'A';

	for (lalph = 'a'; lalph >= 'z'; lalph++)
		putchar(lalph);
	for (ualph = 'A'; ualph >= 'Z'; ualph++)
		putchar(ualph);
	putchar('\n');
	return (0);
}
