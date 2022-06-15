#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the alphabet
 *
 *Return: return zero
 */

int main(void)
{
char abc = 'a';
while (abc <= 'z')
{
putchar(abc);
(abc++);
}
return (0);
}
