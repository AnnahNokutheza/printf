#include "main.h"
<<<<<<< HEAD
#include <unistd.h>
/**
  * _printf - function that prints
  * calls the corresponding function.
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (find_f[i]'sc')
	{
		if (find_f[i]'sc'[0] == (*format))
			return (find_f[i]'f');
		i++;
	}
	return (void);
}
=======

>>>>>>> fffbfc3a60dab06109a117c74ca21082dab7630a
/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int written = 0, (*structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = driver(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = format[1];
				written += structype(q, pa);
			}
			else if (format[1] != '\0')
			{
				written += _putchar('%');
				written += _putchar(format[1]);
			}
			else
			{
				written += _putchar('%');
				break;
			}
			format += 2;
		}
<<<<<<< HEAD
		if (format[i] == '\0')
			return (cprint);
		f = get_function(&format[i + 1]);
		if (f != NULL)
=======
		else
>>>>>>> fffbfc3a60dab06109a117c74ca21082dab7630a
		{
			written += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (written);
}
