#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination buffer
 * @src: source buffer
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
