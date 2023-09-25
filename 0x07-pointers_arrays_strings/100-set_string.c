#include "main.h"

/**
 * set-string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to the string to set the pointer to
 */

void set_string(char **s, char *to)
{
	/*set the value of the pointer to the address of 'to'*/
	*s = to;
}
