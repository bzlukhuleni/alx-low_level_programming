#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the substring in haystack, or NULL
 *         if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return haystack;

		haystack++;
	}

	return NULL;
}
