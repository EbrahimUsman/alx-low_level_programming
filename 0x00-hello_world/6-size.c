#include <stdio.h>
/**
 * main - print the sizes of many data types
 * Return: 0 if exits correctly,none-zero otherwise
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d bytes(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int:%d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
