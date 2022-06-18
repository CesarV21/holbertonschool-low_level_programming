#include "main.h"
/**
* print_number_absolute  - funtion print number_absolute 
* Descrption: print absolute
* Return: On success 1
* @void: print number_absolute 
*/
int _abs(int number_absolute)
{
if (number_absolute < 0)
{
return (number_absolute * -1);
}
return (number_absolute);
}
