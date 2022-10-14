#include<stdio.h>
/**
*main- Entry point
*
*return: Always 0 (Success)
*/
int main(void)
{
    int a;
    long int b;
    long long int c;
    char d;
    float f;

    printf("Size of a char : %lu byte(s)\n", sizeof(d));
    printf('size of int: %lu byte\n', sizeof(a));
    printf("size of long long int :%lu byte\n", sizeof(c));
    printf("size of float: %lu bytes\n", sizeof(f));
    printf("size of long int:%lu byte\n", sizeof(b));
    return (0);
 }
