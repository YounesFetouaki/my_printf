#include "main.h"
/**
 * my_strlen - Calculate the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */
int my_strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
