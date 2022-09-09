#include<stdio.h>
/**
 * main - Prints numbers o to 9 and letters a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
