#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    char charType;
    int intType;
    long int longitType;
    long long int longlongintType;
    float floatType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
    printf("Size of an into: %zu byte(s)\n", sizeof(intotype));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
    printf("size of a float: %zu byte(s)\n", sizeof(floattype))
    
    return 0;
}
