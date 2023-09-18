#ifndef main_h
#define main_h
#include <stdarg.h>

int output(char *str, int bytes);
int output_1(char c);
int _printf(const char *format, ...);
int get_function(char sp, va_list list);
int p_string(char *str);
int p_char(int c);
int p_percent(char c);
#endif
