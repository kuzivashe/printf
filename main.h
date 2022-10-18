#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
  * struct fmt - Struct op
  * @fmt: format
  * @fn: associated function
  */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char [], int, int, int, int);
};

/**
  * typedef struct fmt fmt_t - Struct op
  * @fmt: format
  * @fn: associated function
  */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list valist, char buffer[], int flags, int width, int precision, int size);

/* functions to handle other specifiers*/
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list valist);
int get_precision(const char *format, int *i, va_list valist);
int get_size(const char *format, int *i);

#endif
