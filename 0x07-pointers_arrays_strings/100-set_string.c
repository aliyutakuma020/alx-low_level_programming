#include "main.h"
/**
* set_string - Set the value of a pointer to a string.
* @s: Pointer to a pointer.
* @to: Pointer to the string to set @s to.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
