#include <unistd.h>
/**
 * main - entry point
 * Description: program to print _putchar to standart output
 * Return: O if successful
 */
int _putchar(char c);

int main(void)
{
	char *str = "_putchar\n";
	while (*str)
		_putchar(*str++);
	return (0);
}

int _putchar(char c)
{
	return write(1, &c, 1);
}
