#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if s1 and s2 are equal, a value less than 0 if s1 is less than s2,
 *         and a value greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
