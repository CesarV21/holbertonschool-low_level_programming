#include<stdio.h>
/**
 * 
 *that prints the size of various types on the comput
 * 
 */
int main() {
    int intType;
    float floatType;
    char charType;
    long int longtype;
    long long lolongtype;


    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of longType: %zu byte\n", sizeof(longType;));
    printf("Size of lolongType: %zu byte\n", sizeof(lolongtType;));

    return 0;
}
