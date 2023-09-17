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
_printf("my name is doaa ");
_printf("my first letter is %c and second is %c and my total name is %s ", 'd', 'o', "doaa");
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("single percent %%\n");
_printf("1\n");
_printf("%k\n");
printf("2\n");
printf("%k\n");
return (0);
}
