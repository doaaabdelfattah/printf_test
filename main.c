#include "main.h"
#include <limits.h>
#include <stdio.h>
int main(void)
{
int len;
int len2;
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
printf("Length:[%d, %d]\n", len, len2);
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("ess%ccs%scscses", 'T', "Test");
printf("ess%ccs%scscses", 'T', "Test");
_printf("1\n");
_printf("%k\n");
printf("2\n");
printf("%k\n");
return (0);
}
