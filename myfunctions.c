#include <unistd.h>
#include <string.h>



int output_1(char c)
{
    return (write(1, &c, 1));
}


int output(char *str, int bytes)
{
    return (write(1, str, bytes));
}
int p_string(char *str)
{
        int count;
        count = 0;
        if (str != NULL)
        count = write(1, str, strlen(str));
        return (count);
    }

int p_char(int c)
{
    output_1(c);
    return (1);
}

int p_percent(char c)
{
    output_1(c);
    return (1);
}
