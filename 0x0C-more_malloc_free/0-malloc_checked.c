#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * This function allocates memory using malloc and checks if the allocation was
 * successful. If malloc fails to allocate memory, the function terminates the
 * program with exit status 98.
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
/* allocate memory using malloc */
	ptr = malloc(b);
/* check if the allocation was successful */
	if (ptr == NULL)
	{
/* if malloc fails to allocate memory, exit with status 98 */
	exit(98);
}
return (ptr);
}
