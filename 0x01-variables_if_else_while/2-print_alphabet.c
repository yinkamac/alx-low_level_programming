#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Description : Description: prints the alphabet in lowercase\n
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

