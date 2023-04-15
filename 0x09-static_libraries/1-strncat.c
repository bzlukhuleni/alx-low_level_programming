#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
