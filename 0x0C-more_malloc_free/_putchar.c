#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) {
	int num_written = write(1, &c, 1);
	if (num_written == -1) {
		return -1;
	}
	return 1;
}
