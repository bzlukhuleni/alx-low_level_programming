#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';

	return dest;
}
