#include "main.h"
/**
* main - putchar
* Description: print
* Return: On sucess 1
* @void: print alphabet
*/

void print_alphabet(void)
{
char c;

for (c = 'a';  c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
