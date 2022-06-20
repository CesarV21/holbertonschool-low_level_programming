#include "main.h"
/**
 *print_last_digit
 *Descrption: print last digit
 *Return: On success 1
 *@it shows the last number
 */

int print_last_digit(int z)
{
int x = z % 10;
if (z >= 45)
{
_putchar(x);
}
_putchar('\n');
return (0);
}
