#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

/*PROTOTYPE*/
int _printf(const char *format, ...);
int c_directive(char format);
int s_directive(const char *format);
int por_directive(char c);
int _putchar(char c);
int str_len(const char *string);
int d_directive(int argument);
int b_directive(int argument);

#endif
