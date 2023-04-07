#include "main.h"

/**
 * recursive_puts - function like puts();
 * @s: input
 * Return: Always 0 (Success)
*/
void recursive_puts(char *s)
{
	if (*s)
{
	put_character(*s);
	recursive_puts(s + 1);
}
	else
	put_character('\n');
}
