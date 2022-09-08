#include <stdio.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
