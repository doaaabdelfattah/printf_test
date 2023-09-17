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
{
int i, count;
char *str;
va_list arglist;
va_start(arglist, format);

if (format == NULL)
return (-1);
else
{
count = 0;
for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] != '%')
	{
	output_1(format[i]);
	}
	else
	{
	i++;
	if (format[i] == 'c')
	{
		output_1(va_arg(arglist, int));
	}
	else if (format[i] == 's')
	{
	str = va_arg(arglist, char *);
	if (str != NULL)
	output(str, strlen(str));
	}
	else if (format[i] == '%')
	output_1('%');
	else
	{
	output_1('%');
	output_1(format[i]);
	}	
	}
	count++;
}
}
va_end(arglist);
return (count);
}
