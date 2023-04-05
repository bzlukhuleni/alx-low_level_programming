/**
 * my_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int my_putchar(char c)
{
	char output[1] = { c };
	ssize_t num_written = write(STDOUT_FILENO, output, 1);

	if (num_written == -1)
	{
		// handle error
	return -1;
	}

	return 1;
}
