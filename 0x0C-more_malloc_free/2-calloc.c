#include <stdlib.h>
#include "my_header.h"

/**
 * my_memset - sets the first n bytes of the memory area pointed to by s
 * to the specified value.
 * @s: pointer to the memory area to be filled.
 * @val: value to be set.
 * @n: number of bytes to be set to the value.
 *
 * Return: a pointer to the memory area s.
 */
void *my_memset(void *s, int val, size_t n)
{
unsigned char *p = s;
unsigned char c = (unsigned char)val;

while (n--)
*p++ = c;

return (s);
}

/**
 * my_calloc - allocates memory for an array - nmemb elements, size bytes each
 * and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * @nmemb: number of elements to be allocated.
 * @size: size of each element.
 *
 * Return: a pointer to the allocated memory or NULL if the allocation fails.
 */
void *my_calloc(size_t nmemb, size_t size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

my_memset(ptr, 0, nmemb * size);

return (ptr);
}
