#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
*_printf - print output
*@format: pointer to text
*Return: int
*/
int _printf(const char *format, ...)
{ int i, count;
va_list arglist;
va_start(arglist, format);
if (format == NULL)
{
va_end(arglist);
return (-1);
}
else
{
count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%' && format[i + 1] != '\0')
{
output_1(format[i]);
count++;
}
else
{
count += get_function(format[++i], arglist);
}
}
}
va_end(arglist);
return (count);
}
