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
	if (abc == 'e' && abc != 'q')
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
