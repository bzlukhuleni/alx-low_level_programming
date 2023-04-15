#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 *
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
unsigned int i;

for (i = 0; i < strlen(str); i++)
{
if (!isdigit(str[i]))
return (0);
}

return (1);
}

/**
 * main - adds numbers passed as arguments to the program
 *
 * @argc: the number of arguments passed
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, num, sum = 0;

if (argc < 2)
{
printf("Error\n");
return (1);
}

for (i = 1; i < argc; i++)
{
if (check_num(argv[i]))
{
num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
