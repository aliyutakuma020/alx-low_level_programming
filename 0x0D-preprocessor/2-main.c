#include <stdio.h>
/**
 * main - Entry point of the program.
 * Description: This function prints the name of the source file it was
 * compiled from, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
