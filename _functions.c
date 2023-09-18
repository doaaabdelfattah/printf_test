#include "main.h"
/**
 * output_1 - function
 * @c: char
 * Return: int
 */
int output_1(char c)
{
return (write(1, &c, 1));
}

/**
 * output - function
 * @str: char
 * @bytes: number
 * Return: int
 */
int output(char *str, int bytes)
{
return (write(1, str, bytes));
}

int get_function(char sp, va_list list)
{
    int count = 0;
    switch (sp)
    {
    case 's':
    {
        count += p_string(va_arg(list, char *));
        break;
    }
    case 'c':
        count += p_char(va_arg(list, int));
        break;
    case '%':
        count += p_percent('%');
        break;
    }
    return (count);
}



/**
 * p_string - function
 * @str: string
 * Return: int
 */
int p_string(char *str)
{
int count;
count = 0;
if (str != NULL)
count = write(1, str, strlen(str));
return (count);
}

/**
 * p_char - function
 * @c: char
 * Return: int
 */
int p_char(char c)
{
return (write(1, &c, 1));
}
/**
 * p_percent - function
 * @c: char
 * Return: int
 */
int p_percent(char c)
{
output_1(c);
return (1);
}
