#include "main.h"
/**
 *_abs - print number_absolute 
 *Descrption: print absolute
 *Return: On success 1
 *@number_absolute 
 */
int _abs(int number_absolute)
{
if (number_absolute < 0)
{
return (number_absolute * -1);
}
return (number_absolute);
}
