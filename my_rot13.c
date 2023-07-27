#include "main.h"
/**
 * rot13 - Apply rot13 transformation to a string.
 * @str: The input string.
 * Return: The length of the string.
 */
char *rot13(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
str[i] += 13;
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
str[i] -= 13;
i++;
}
return (str);
}
