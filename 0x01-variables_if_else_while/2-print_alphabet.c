#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
