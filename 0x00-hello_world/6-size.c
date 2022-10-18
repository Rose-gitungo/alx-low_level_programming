#include<stdio.h>
/**
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf('size of int: %lu byte\n', (unsigned long)sizeof(a));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of float: %lu bytes\n", (unsigned long)sizeof(f));
printf("size of long int:%lu byte\n", (unsigned long)sizeof(b));
return (0);
}
