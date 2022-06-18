#include "main.h"
/**
 * _islower - print the 1 when is capital letter or 0 when is lower
 * @c: contine el alfabeto
 * Return: _islower
 */
int _islower(int c)
	{
	if (c <= 'z' && c >= 'a')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
