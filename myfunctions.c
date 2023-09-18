#include <unistd.h>
#include <string.h>


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
int p_char(int c)
{
output_1(c);
return (1);
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
