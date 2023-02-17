#include <stdio.h>
/**
 * main - A program to print sizes of various computer types
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
