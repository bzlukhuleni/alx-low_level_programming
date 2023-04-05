/**
 * my_memset - fill a block of memory with a specific value
 * @dest: starting address of memory to be filled
 * @val: the desired value
 * @count: number of bytes to be changed
 *
 * Return: pointer to the start of the memory block
 */
void *my_memset(void *dest, int val, size_t count)
{
	char *start = dest;
	char *end = start + count;

	for (char *p = start; p < end; ++p)
	{
	*p = (char)val;
	}

	return (dest);
}
