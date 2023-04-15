#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 *
 * @s: input string
 * @c: character to find
 *
 * Return: pointer to first occurrence of character, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
