#include "main.h"
/**
 *this function _abs prints number_absolute
 *@n: this is number_absolute
 *Return: retorna 1 o 0 si no
 */

int _abs(int number_absolute)
{
if (number_absolute < 0)
{
return (number_absolute * -1);
}
return (number_absolute);
}
