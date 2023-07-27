#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
/*
	len = _printf("%d", 0);
	len2 = printf("%d", 0);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	len = _printf("%d", 1024);
	len2 = printf("%d", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

		len = _printf("%d", -1024);
	len2 = printf("%d", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	
	
		len = _printf("%d", INT_MAX);
	len2 = printf("%d", INT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	*/
	
		len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	 /*
		long int l = INT_MAX;

	l += 1024;
	len = _printf("%d", l);
	len2 = printf("%d", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		long int l = INT_MIN;

	l -= 1024;
	len = _printf("%d", l);
	len2 = printf("%d", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("There is %d bytes in %d KB\n", 1024, 1);
	len2 = printf("There is %d bytes in %d KB\n", 1024, 1);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", 1024);
	len2 = printf("%i", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", -1024);
	len2 = printf("%i", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", 0);
	len2 = printf("%i", 0);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", INT_MAX);
	len2 = printf("%i", INT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", INT_MIN);
	len2 = printf("%i", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	long int l = INT_MAX;

	l += 1024;
	len = _printf("%i", l);
	len2 = printf("%i", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
	len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%d == %i\n", 1024, 1024);
	len2 = printf("%d == %i\n", 1024, 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("iddi%diddiiddi\n", 1024);
	len2 = printf("iddi%diddiiddi\n", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%d", 10000);
	len2 = printf("%d", 10000);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
		len = _printf("%i", 10000);
	len2 = printf("%i", 10000);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
*/
	return (0);

}
