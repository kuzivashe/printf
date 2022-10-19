#include "main.h"

/*************************PRINT CHAR************************/

/**
  * print_char - prints a char
  * @types: list arguments
  * @buffer: array to handle print
  * @flags: calculates active flags
  * @width: width
  * @precision: precision specification
  * @size: size specifier
  * Return: number of chars printed
  */
int print_char(va_list types, char buffer[], 
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/***********************PRINT A STRING**********************/

/**
  * print_string - prints a string
  * @types: list arguments
  * @buffer: array to handle print
  * @flags: calculates active flags
  * @width: get width
  * @precision: precision specification
  * @size: size specifier
  * Return: number of chars printed
  */
int print_string(va_list types, char buffer[], 
		int flags, int width, int precision, int size)
{
	int length = 0, i;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "       ";
	}
	return (write(1, str, length));
}






















