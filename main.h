#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
  * struct fmt - Struct op
  * @fmt: the format
  * @fn: the function associated
  */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
  * typedef struct fmt fmt_t - Struct op
  * @fmt: the format
  * @fn: the function
  */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list valist,
		char buffer[], int flags, int width, int precision, int size);

/*********************FUNCTIONS*********************/

/* FUNCTIONS TO PRINT CHAR AND STRINGS */
int print_char(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], 
		int flags, int width, int precision, int size);

/* FUNCTIONS TO PRINT NUMBERS */
int print_int(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], 
		int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[], 
		int flags, char flag_ch, int width, int precision, int size);

#endif






















