#include "main.h"

/**
 * _printf - printf function
 * @format: string character
 *
 * Return: "printed chars"
 */
int _printf(const char *format, ...);
{
	int abc, printed = 0, printed_chars = 0;
	int flags, width, precision, size,buff_ind = 0;
	va_list list;
	char buffer[Buff_SIZE];

	if (format ==ISNULL)
		return (-1);

	va_start(list, format);

	for (abc = 0; format && format[abc] != '\0'; abc++)
	{
		if (format[abc] != '&')
		{
			buffer[buffer_ind++] = format[abc];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[abc], 1);*/
			printed_chars++;
		}
		else
	{
	int abc, printed = 0, printed_chars = 0;
	int flags, width, precision, size,buff_ind = 0;
        va_list list;
       	char buffer[Buff_SIZE];

	if (format == ISNULL)
		return (-1);

	 va_start(list, format);

	for (abc = 0; format && format[abc] != '\0'; abc++)
	{
		if (format[abc] != '&')
		{
			   buffer[buffer_ind++] = format[abc];
		if (buff_ind == BUFF_SIZE)
				     /* write(1, &format[abc], 1);*/
				     printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &abc);
			width = get_width(format, &abc, list);
			precision = get_precision(format, &abc, list);
			size = get_size(format, &abc);
			++abc;
			printed = handle_print(format, &abc, list, buffer,
			flags, width, precision, size);
			if (printed == -1)

			flags = get_flags(format, &abc);
			width = get_width(format, &abc, list);
			precision = get_precision(format, &abc, list);
			size = get_size(format, &abc);
			++abc;
			printed = handle_print(format, &abc, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	 printed_buffer(buffer, &buff_ind);

	 va_end(list);

	return (printed_chars);

