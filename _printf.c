#include "main.h"
int print_binary(unsigned int num);
int print_id(int num);
int print_string(char *str);
/**
 * _printf - produces output according to a format
 * @format: The format string.
 * @...: The variable arguments
 * Return: The number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list argument;

	va_start(argument, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(argument, int);

				if (num == 0)
				{
					_putchar('0');
					i++;
				}
				else
				{
					i += print_id(num);
				}
			}
			else if (*format == 'c')
			{
				_putchar(va_arg(argument, int));
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(argument, char *);

				if (str == NULL)
				{
					print_string("(null)");
					i += 6;
				}
				else
				{
					i += print_string(str);
				}
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(argument, unsigned int);

				return (print_binary(num));
			}
			else if (*format == 'r')
			{
				char *str = va_arg(argument, char *);
				int len = my_strlen(str);
				int j;

				for (j = len - 1; j >= 0; j--)
				{
					_putchar(str[j]);
					i++;
				}
			}
			else if (*format == 'R')
			{
				char *str = va_arg(argument, char *);
				char *rot_str = rot13(str);

				i += print_string(rot_str);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(argument);
	return (i);
}
