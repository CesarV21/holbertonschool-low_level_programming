#include <stdio.h>
/**
 *main - print the alphabet
 *
 *Return: return zero
 */

int main(){
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;

for (i = 0; i < 10; i++){
putchar(a[i]);
}
putchar ('\n');
return (0);
}
