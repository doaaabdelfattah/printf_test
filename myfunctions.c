#include "main.h"


int (*get_func_print(char c))(va_list)
{
    sp_t fun_list[] = {
        {'s', my_p_string},
        {'c', my_p_char}};
    // {"i", p_int},
    // {"d", p_dec},
    // {"%", p_perc},
    // {NULL, NULL}};

    int i;
    for (i = 0; i < 3; i++)
    {
        if (c == fun_list[i].sp)
            return (fun_list[i].func);
    }
    return (NULL);
}


/**
 * p_string - function
 * @str: string
 * Return: int
 */
int my_p_string(va_list arglist)
{
    int len;
    const char *str = va_arg(arglist, const char *);
    // if (str == NULL) {
    //     write(1, "(null)", 6);
    //     return 6;  // Length of "(null)"
    // }
    len = 0;
    while (str[len] != '\0') {
        len++;
    }
return (write(1, str, len));
}
/**
 * p_char - function
 * @c: char
 * Return: int
 */
int my_p_char(va_list arglist)
{
output_1(va_arg(arglist, int));
return (1);
}
// /**
//  * p_percent - function
//  * @c: char
//  * Return: int
//  */
// int p_percent(char c)
// {
// output_1(c);
// return (1);
// }
