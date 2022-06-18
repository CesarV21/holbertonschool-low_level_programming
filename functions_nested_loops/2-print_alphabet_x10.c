#include "main.h"
/**
* main - check the code.
* 
* Return: Always 
* @void:print_alphabet_x10
*/

void print_alphabet_x10(void)

{
char c;

for (c = 97; c <= 122; c++)
{
_putchar(c*10);
}
_putchar('\n');
}
